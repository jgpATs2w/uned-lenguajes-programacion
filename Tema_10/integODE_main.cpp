// Fichero: integODE_main.cpp
#include<iostream>
#include<vector>
#include<cmath>
#include "integODE.h"

const double h    = 0.001; // Paso de integración (Delta t)
const double x0   = 0.01;  // Valor inicial de x
const double t0   = 0;     // Valor inicial de t
const int nPasos  = 20000; // Número de pasos de integración

/*
 * Función     f(x,t)
 * de la ecuación diferencial ordinaria
 *     dx/dt = f(x,t)
*/
double f(double x, double t) {
	return cos(x*t)*t-sin(t);
}

int main() {
	// Integración aplicando Euler explícito
	std::vector<double> x = 
		integODE::EulerExplicito(f, t0, x0, h, nPasos);
	// Integración aplicando Euler-Richardson
	std::vector<double> x1 = 
		integODE::EulerRichardson(f, t0, x0, h, nPasos);
	// Integración aplicando R-K (4 orden)
	std::vector<double> x2 = 
		integODE::RungeKutta4(f, t0, x0, h, nPasos);
	// Salida de los resultados por consola
	for (int i=0; i<nPasos+1; i+=100)  
		std::cout << "t =" << t0+i*h << "\tx (Euler)= " << x[i] <<
			"\tx (E-R)= " << x1[i] << "\tx (R-K4)= " << x2[i] << std::endl;
	return 0;
}


