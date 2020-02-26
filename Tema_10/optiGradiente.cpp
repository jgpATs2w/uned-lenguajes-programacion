// Fichero: optiGradiente.cpp
#include <iostream>
#include <cmath>
#include <iomanip>

const double h = 0.01;         // Paso cálculo 
// Constantes condición finalización
const int    nIterMax      = 1000;  // Número máximo de iteraciones
const double moduloGradMin = 0.001; // Modulo gradiente

double f(double x, double y) {
	return -sin(y)*( x*x - 2*x );
}

void grad_f(double x, double y, double h, double &vx, double &vy) {
	vx = (f(x+h,y)-f(x-h,y))/(2*h);
	vy = (f(x,y+h)-f(x,y-h))/(2*h);
	return;
}

int main() {
	double x, y;
	std::cout << "x y = ";
	std::cin >> x >> y;
	std::cout << std::setprecision(12);
	int nIter = 1;
	bool sigueIterando;
	do {
		double vx, vy;  // Gradiente de f: (vx, vy)
		grad_f(x,y,h,vx,vy);
		x += vx*h;
		y += vy*h;
		double moduloGrad = sqrt(vx*vx+vy*vy);
		sigueIterando = moduloGrad>moduloGradMin && nIter<nIterMax;
		if (!(nIter%10) || !sigueIterando)
			std::cout << nIter << " Punto :"  <<
				x << ", " << y << "\tf = " << f(x,y) <<
				"\tModulo gradiente: " << moduloGrad << std::endl;
		nIter++;
	} while (sigueIterando);
	return 0;
}
