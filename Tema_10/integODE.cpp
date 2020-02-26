// Fichero: integODE.cpp
#include <vector>
#include "integODE.h"

namespace integODE {

std::vector<double> EulerExplicito( double (*f)(double,double),
		 double t0, double x0, double h, int nPasos) {
	// vector resultado
	std::vector<double> x;
	x.reserve(nPasos+1);
	// Inicialización 
	x.push_back(x0);
	double t = t0;
	// Algoritmo
	for (int i=1; i<=nPasos; i++) {
		double x_i = x[i-1] + f(x[i-1],t)*h;
		x.push_back( x_i );
		t += h;
	}
	return x;
}

std::vector<double> EulerRichardson( double (*f)(double,double),
		 double t0, double x0, double h, int nPasos) {
	// vector resultado
	std::vector<double> x;
	x.reserve(nPasos+1);
	// Inicialización 
	x.push_back(x0);
	double t = t0;
	// Algoritmo
	for (int i=1; i<=nPasos; i++) {
		double tmed = t + h/2;
		double xmed = x[i-1] + f(x[i-1],t)*h/2;
		double x_i = x[i-1] + f(xmed,tmed)*h;
		x.push_back( x_i );
		t += h;
	}
	return x;
}

std::vector<double> RungeKutta4( double (*f)(double,double),
		 double t0, double x0, double h, int nPasos) {
	// vector resultado
	std::vector<double> x;
	x.reserve(nPasos+1);
	// Inicialización 
	x.push_back(x0);
	double t = t0;
	// Algoritmo
	for (int i=1; i<=nPasos; i++) {
		double k1 = f(x[i-1],t)*h;
		double k2 = f(x[i-1]+k1/2,t+h/2)*h;
		double k3 = f(x[i-1]+k2/2,t+h/2)*h;
		double k4 = f(x[i-1]+k3,t+h)*h;
		double x_i = x[i-1] + k1/6 + k2/3 + k3/3 + k4/6;
		x.push_back( x_i );
		t += h;
	}
	return x;
}

}
