#include <iostream>
#include <iomanip>
#include <math.h>

#define EPSILON    (1.0E-8)

using namespace std;

/*
 * Muestra mensaje y lee dato introducido por usuario
 */
int askForInt(string message) {
    int response;
    cout << message;
    cin >> response;

    return response;
}

/*
 * Muestra mensaje y lee dato introducido por usuario
 */
double askForDouble(string message) {
    double response;
    cout << message;
    cin >> response;

    return response;
}

/*
 * Muestra mensaje y lee dato introducido por usuario
 */
char askForChar(string message) {
    char response;
    cout << message;
    cin >> response;

    return response;
}

/*
 * Muestra mensaje
 */
void print(string message) {
    cout << message << "\r\n";
}

/*
 * Muestra mensaje de error
 */
void printError(string message) {
    cerr << message;
}

/*
 * Muestra banner del ejercicio
 */
void printBanner(string message) {
    cout << endl << "***************" << endl;
    cout << "* " << message << " *" << endl;
    cout << "***************" << endl;
}

/*
 * Muestra si el resultado es correcto o no
 */
void printResult(bool resultOk) {
    print(resultOk ? "\nresultado correcto\n" : "\nresultado NO correcto\n");
}

/*
 * Establece la precision de la salida
 */
void setPrecision(int precision) {
    cout << setprecision(8);
}

/*
 * Establece si el formato es cientifico
 */
void setScientific() {
    cout << scientific;
}

/*
 * Compara valores
 */
bool areEqual(double a, double b) {
    return fabs(a - b) < EPSILON;
}