#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include "ejercicio1.h"
#include "utils.h"

using namespace std;

const int I = 200;
const int Nc = 10000;

/*
 * Funcion principal del ejercicio2.
 * - Estimacion de una magnitud fisica en el punto (x*,t*) en base al metodo de Monte Carlo.
 */
int ejercicio2(bool debug) {

    printBanner("EJERCICIO 2");
    print("Estimacion mediante metodo Monte Carlo");

    // Seleccion del punto (x*, t*)
    // El usuario seleccionara el punto de partida. Se ha incluido un tercer punto con t mucho mayor a los del enunciado
    // para comprobar que el algoritmo alcanza el contorno.
    double x_ast = 0.4;
    double t_ast = 0.04;
    if (!debug) {
        int puntoInicio = askForInt(
                "Selecciona un punto de inicio: \r 1 - (0.4, 0.04) \r 2 - (0.4, 0.1) \r 3 - (0.4, 100) ");
        if (puntoInicio == 2) {
            t_ast = 0.1;
        } else if (puntoInicio == 3) {
            t_ast = 100;
        }
    }

    // Discretizacion de las variables x y t
    double delta_x = (double) 1 / I;
    double delta_t = (double) 1 / (2 * I ^ 2);

    // Recorrido de los Nc caminos, a partir de (x*, t*), almacenando los resultados de cada final
    // en el vector Ubs segun:
    // - si se alcanza t = 0, U(x,0) = 100
    // - si se alcanza el contorno (x=0 o x=1), U(0,t) = 0 = U(1,t)
    cout << "Recorriendo " << Nc << " caminos..." << endl << endl;
    int k = 1, nContorno = 0, nInicio=0;
    double x, t;
    vector<double> Ubs;
    double Ub;
    do {
        x = x_ast;
        t = t_ast;
        do {
            // Generacion de un numero pseudoaleatorio
            double r = ((double) random() / (RAND_MAX));

            // Desplazamiento en base a r
            if (r < 0.25) {
                x += delta_x;
            } else if (r < 0.5) {
                x -= delta_x;
            } else {
                t -= delta_t;
            }

        } while (t > 0 && x > 0 && x < 1);

        if(t>0){
            Ub = 0;
            nContorno ++;
        }else{
            Ub = 100;
            nInicio++;
        }

        Ubs.push_back(Ub);

        k++;
    } while (k <= Nc);

    // Calculo del promedio de los valores almacenados en el vector Ub
    double result = std::accumulate(Ubs.begin(), Ubs.end(), 0) / Nc;

    setPrecision(3);

    cout << "(x*,t*)=(" << x_ast << "," << t_ast << ") -> " << "U(x*,t*) = " << result << endl << endl;
    cout << nContorno << " alcanzaron el contorno, " << nInicio << " alcanzaron el inicio." << endl;

    if (debug) {
        bool resultOk = Ubs.size() == Nc && ( nContorno + nInicio ) == Nc;
        printResult(resultOk);
    }

    return 0;
}