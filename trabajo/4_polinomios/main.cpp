#include <iostream>
#include <regex>
using namespace std;

const int MAX_EXPONENTE = 10;
const double X0 = 1.5;

// Si está en true carga un polinomio por defecto y comprueba el resultado
const bool DEBUG = false;

string ltrim(string str, char del){
    return str.erase(0,str.find_first_not_of(del));
}

int printAndGetMaxNonZeroExponente(int* coeficientes){
    int max_no_zero_exponente = 0;
    for (int i = 0; i < MAX_EXPONENTE; i++) {
        if (coeficientes[i] != 0)
            cout << "a" << i << " = " << coeficientes[i] << endl;
        if( i > max_no_zero_exponente )
            max_no_zero_exponente = i;
    }
    return max_no_zero_exponente;
}

int main() {
    string polinomio;
     if(DEBUG) polinomio = "+1-x+4x2-16x5";
    int coeficientes[MAX_EXPONENTE] ={0};

    cout << "Introduce un polinomio (p.e. +1-x+4x2-16x5):";
    if(!DEBUG)
        cin >> polinomio;
    cout << "\n\n";

    // Para la extracción de los coeficientes se ha optado por emplear expresiones regulares
    // en vez de tratar caracter a caracter la cadena, por considerar que aportan más flexibilidad.
    string strToSearch;
    regex re("^([+-]\\d*(x\\d*)?)+");
    strToSearch = polinomio;
    smatch match;
    if (regex_match(strToSearch, match, re)) {
        regex re("([+-]\\d*)(x\\d*)?");
        while (regex_search(strToSearch, match, re)) {
            if (match[2].matched) {
                string coeficiente = match[1];
                if(coeficiente == "-")
                    coeficiente = "-1";
                if(coeficiente == "")
                    coeficiente = "1";

                int exponente = 1;
                if(match[2].str() != "x"){
                    exponente = stoi(ltrim(match[2].str(), 'x'));
                }
                if(DEBUG){
                    cout << " m[0]=[" << match[0] << "] " << "\n";
                    cout << " m[1]=[" << match[1] << "] " << "\n";
                    cout << " m[2]=[" << match[2] << "] " << "\n";
                    cout << " coeficientes[" << exponente << "]=[" << coeficiente << "] " << "\n";
                    cout << "\n\n";
                }

                coeficientes[exponente] = stoi(coeficiente);

            } else {
                if(DEBUG){
                    cout << " m[1]=[" << match[1] << "] " << "\n";
                    cout << " coeficientes[0]=[" << match[1] << "] " << "\n";
                    cout << "\n\n";
                }

                coeficientes[0] = stoi(match[1]);
            }
            strToSearch = match.suffix();
        }

    } else {
        cerr << "Polinomio no válido:\\n no debe estar vacío,\\n debe empezar por operador +-.\\n P.e. +1-x+4x2-16x5";
        return 0;
    }

    int max_no_zero_exponente = printAndGetMaxNonZeroExponente(coeficientes);

    double b = coeficientes[max_no_zero_exponente];
    for (int i = max_no_zero_exponente; i >= 0; i--) {
        b = b * X0 + coeficientes[i];
        cout << b << endl;
    }

    cout << "p(" << X0 << ") = " << b << endl;

    if(DEBUG){
        string result = (b == -113) ? "OK" : "KO";
        cout << "TEST: " +  result << endl;
    }

    return 0;
}
