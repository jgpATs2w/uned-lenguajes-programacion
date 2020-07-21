#include <iostream>
#include <vector>
#include <cmath>
#include "ejercicio1.h"
#include "utils.h"

using namespace std;

const int n_debug = 1;
const int N = 10;
const double pi = 3.14159265358979323846;

/*
 * Comprobacion de resultados, se comparan frente a los esperados
 */
void checkResult(unsigned int k, double valor) {
    bool resultOk = true;
    switch (k) {
        case 0:
            if (!areEqual(valor, 2)) resultOk = false;

            printResult(resultOk);
            break;
        case 1:
            if (!areEqual(valor, 1.80901699)) resultOk = false;

            printResult(resultOk);
            break;
        case 2:
            if (!areEqual(valor, 1.30901699)) resultOk = false;

            printResult(resultOk);
            break;
    }
}

/*
 * Funcion principal del ejercicio 1.
 * - Pregunta por el orden del polinomio. Si es modo debug, se carga el definido en n_debug
 * - Pregunta por los coeficientes. Si es modo debug, todos los coef. son iguales a 1.
 * - Muestra los valores calculados de evaluar el polinomio, siguiendo el algoritmo de Horner, para los
 * valores de x_k calculados con x_k = cos( 2 * pi * k / N)
 */
int ejercicio1(bool debug) {
    printBanner("EJERCICIO 1");
    print("Evaluacion de polinomios");

    // Introduccion del orden del polinomio
    int n = debug ? n_debug : askForInt("¿Orden del polinomio? ");
    if (n < 0) {
        printError("No puede ser negativo");
        return 1;
    }

    // Introduccion de coeficientes
    print("Introduce los coeficientes:");

    vector<double> coefs(n + 1, 1);
    if (!debug) {
        double coef;
        for (unsigned int i = 0; i < n + 1; i++) {
            cin >> coef;
            coefs.push_back(coef);
        }
    }

    // Evaluación del polinomio para los N x_k valores.
    cout << "Evaluacion del polinomio para los " << N << " valores de x_k = cos(2*pi*k/N)";
    setPrecision(8);
    setScientific();
    for (unsigned int k = 0; k < N; k++) {

        // Implementación del algoritmo de Horner
        // p(x) = q1(q2(..(qn(x))..)
        double x = cos(2 * pi * k / N);

        for (unsigned int j = n; j > 1; j--) {
            x = coefs.at(j - 1) + coefs.at(j) * x;
        }

        double valor = coefs.at(0) + x;

        cout << "k: " << k << " pn(x_k)= " << valor << endl;
        if (debug) {
            checkResult(k, valor);
        }
    }

    return 0;
}