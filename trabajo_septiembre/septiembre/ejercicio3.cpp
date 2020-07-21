#include <iostream>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include "ejercicio1.h"
#include "utils.h"

using namespace std;

string FILE_PATH_1 = "files/puntos1.txt";
string FILE_PATH_2 = "files/puntos2.txt";
string FILE_PATH_DEBUG = "files/puntos_test.txt";
bool DEBUG = false;
int DEBUG_ERROR = 0;

struct Punto {
    double x;
    double fx;
};

/*
 * Comprueba si el punto ya existe en el vector
 */
bool puntoExist(Punto punto, std::vector<Punto> puntos) {
    return any_of(puntos.begin(), puntos.end(), [punto](Punto p) {
        return p.x == punto.x && p.fx == punto.fx;
    });
}

/*
 * Carga del fichero de puntos.
 */
std::vector<Punto> readFile(string filePath) {
    cout << "Cargando fichero de puntos " << filePath << endl;

    std::ifstream ifs(filePath);
    std::string buffer;
    std::vector<Punto> puntos;

    if (!ifs) {
        if (!DEBUG) {
            cerr << "Error abriendo archivo: " << filePath.c_str();
            exit(EXIT_FAILURE);
        } else {
            DEBUG_ERROR = 1;
            return puntos;
        }
    }
    std::string line;
    while (getline(ifs, line)) {
        std::stringstream ss(line);
        std::vector<std::string> item;
        std::string tmp;
        Punto punto;
        while (getline(ss, tmp, ' ')) {
            item.push_back(tmp);
        }
        punto.x = atof(item.at(0).c_str());
        punto.fx = atof(item.at(1).c_str());

        // Comprueba duplicados
        if (!puntoExist(punto, puntos)) {
            puntos.push_back(punto);
        } else {
            if (!DEBUG) {
                cerr << "Se ha encontrado un punto duplicado (" << punto.x << "," << punto.fx << ")";
                exit(EXIT_FAILURE);
            } else {
                DEBUG_ERROR = 2;
                return puntos;
            }
        }
    }

    // Comprueba si hay menos de dos puntos
    if (puntos.size() < 2) {
        if (!DEBUG) {
            printError("El fichero debe tener menos de 2 puntos.");
            exit(EXIT_FAILURE);
        } else {
            DEBUG_ERROR = 3;
            return puntos;
        }
    }
    return puntos;
}

/*
 * Ejecuta una batería de pruebas para asegurar que se cumplen los requisitos
 */
void runTests() {
    print("Ejecutando tests...");

    bool allPasssed = true;
    // Si hay un error al cargar el fichero
    readFile("files/fake.txt");
    if (DEBUG_ERROR != 1) {
        printError("Primer test ha fallado.");
        allPasssed = false;
    }

    // Si hay duplicados
    DEBUG_ERROR = 0;
    readFile("files/puntos_dup.txt");
    if (DEBUG_ERROR != 2) {
        printError("Segundo test ha fallado.");
        allPasssed = false;
    }

    // Si hay un solo punto
    DEBUG_ERROR = 0;
    readFile("files/puntos_single.txt");
    if (DEBUG_ERROR != 3) {
        printError("Tercer test ha fallado.");
        allPasssed = false;
    }

    // Si no hay errores en la carga
    DEBUG_ERROR = 0;
    std::vector<Punto> puntos = readFile("files/puntos1.txt");
    if (DEBUG_ERROR != 0 | puntos.at(0).x != 0 | puntos.at(0).fx != -5) {
        printError("Cuarto test ha fallado.");
        allPasssed = false;
    }
    if (allPasssed) {
        print("Todos los test pasados con éxito.");
    }
}

/*
 * Funcion principal del ejercicio 3.
 * - Interpolacion mediante el metodo de Newton de las diferencias divididas.
 */
int ejercicio3(bool debug) {

    printBanner("EJERCICIO 3");
    print("Interpolacion mediante el metodo de Newton de las diferencias divididas");

    // se almacena en una variable global
    DEBUG = debug;

    double x;
    std::vector<Punto> puntos;
    int n;

    // Determinacion del fichero de entrada de puntos
    // Para la depuracion se cargan datos extraidos del libro 'Introducion al calculo numerico' Carlos Moreno p.128
    // En modo normal se pregunta al usuario cual de los ficheros de datos del enunciado desea cargar.
    // Al finalizar la carga se ordenan los datos.
    string filePath;
    if (DEBUG) {
        runTests();
        filePath = FILE_PATH_DEBUG;
    } else {
        filePath = askForInt("¿Que fichero de puntos desea cargar?\n 1. Primero\n 2. Segundo\n") == 1 ?
                   FILE_PATH_1 : FILE_PATH_2;
    }
    puntos = readFile(filePath);
    sort(puntos.begin(), puntos.end(), [](Punto &p1, Punto &p2) { return p1.x < p2.x; });

    // Se carga el valor de x del punto que se desea interpolar y se comprueba que pertenece al dominio.
    x = DEBUG ? 0.55 : 0.5;
    if (x < puntos.at(0).x | x > puntos.at(puntos.size() - 1).x) {
        printError("El valor no está en el dominio de los puntos definidos en fichero.");
        exit(EXIT_FAILURE);
    }

    // Orden del polinomio de interpolacion
    n = puntos.size() - 1;

    // Implementacion del metodo de diferencias divididas
    double diff_div[n + 1][n + 2];
    // - relleno las dos primeras columnas
    for (int i = 0; i <= n; i++) {
        diff_div[i][0] = puntos.at(i).x;
        diff_div[i][1] = puntos.at(i).fx;
    }

    // - relleno la tabla de diferencias divididas
    for (int j = 2; j <= n + 1; j++) {
        for (int i = 0; i <= n; i++) {
            diff_div[i][j] = (diff_div[i + 1][j - 1] - diff_div[i][j - 1]) / (diff_div[i + j - 1][0] - diff_div[i][0]);
        }
    }

    // Muestra la tabla de diferencias divididas
    print("Tabla de diferencias divididas:");
    setPrecision(3);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n + 1; j++) {
            if (j < 2 | j < n - i + 2)
                cout << diff_div[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl;

    // Evaluacion del polinomio de interpolacion.
    // En modo pruebas muestra el polinomio
    cout << "Evaluando polinomio de interpolacion para x = " << x;
    double interpolatedValue = diff_div[0][1];
    if (DEBUG) cout << "\n" << interpolatedValue;
    for (int j = 2; j <= n + 1; j++) {
        double productTerm = 1;
        if (DEBUG) {
            if (diff_div[0][j] > 0) cout << "+";
            cout << diff_div[0][j] << " * ";
        }
        for (int i = 0; i < j - 1; i++) {
            if (DEBUG) cout << setprecision(2) << "(x - " << diff_div[i][0] << ") ";

            productTerm = productTerm * (x - diff_div[i][0]);
        }
        interpolatedValue = interpolatedValue + (productTerm * diff_div[0][j]);
    }
    cout << endl << endl;

    // Muestra el valor interpolado
    print("Resultado de la evaluacion:");
    setPrecision(3);
    cout << "f(" << x << ") = " << interpolatedValue << endl;
    if (DEBUG) {
        printResult(areEqual(interpolatedValue, 1.28535156));
    }

    return 0;
}