// Fichero: raicesPolinomio3.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include <complex>

double raizCubica(double x) {
    if (x < 0) return -1.0 * pow(-1.0*x, 1.0/3);
    return pow(x,1.0/3);
}

std::complex<double> polinomio3(double a, double b, double c, 
								double d, std::complex<double> x) {
	std::complex<double> xCuadrado(x*x);
	return a*x*xCuadrado + b*xCuadrado + c*x + d;
}
void raicesPolinomioCubico(double a, double b, double c, double d,
				std::complex<double> &r1, std::complex<double> &r2, 
				std::complex<double> &r3) {
	// Discriminantes
	double B = b/a, C = c/a, D = d/a;
	double f = C-B*B/3;
	double g = (2*pow(B,3)-9*B*C)/27 + D;
	double h = g*g/4 + pow(f,3)/27;
	// Cálculo de las soluciones
	if (f==0 && g==0 && h==0) {
		r1 = r2 = r3 = -raizCubica(D);
	} else if (h<=0) {
		double i = sqrt(g*g/4 - h);
		double j = raizCubica(i);
		double k = acos(-g/(2*i));
		double m = cos(k/3);
		double n = sqrt(3.0)*sin(k/3);
		double p = -b/(3*a);
		r1 = 2*j*m + p;
		r2 = -j*(m+n) + p;
		r3 = -j*(m-n) + p;
	} else {
		double r = -g/2 + sqrt(h);	
		double s = raizCubica(r);
		double t = -g/2 - sqrt(h);	
		double u = raizCubica(t);
		double p = -b/(3 * a);	
		double rR = -(s+u)/2 + p;	
		double rI = (s-u)*sqrt(3.0)/2;
		r1 = s + u + p;
		r2 = std::complex<double>(rR,rI);
		r3 = std::conj(r2);
	}
	return;
}			   

int main() {
	// Entrada de los coeficientes
	double a, b, c, d;
	std::cout << "Coefs de ax^3+bx^2+cx+d=0:\n";
	std::cout << "a: ";	  std::cin >> a ;
	std::cout << "b: ";   std::cin >> b;
	std::cout << "c: ";   std::cin >> c;
	std::cout << "d: ";   std::cin >> d;
	// Cálculo de las soluciones
	std::complex<double> r1, r2, r3;
	raicesPolinomioCubico(a, b, c, d, r1, r2, r3);
	std::cout << "Soluciones:\n" << std::setprecision(15) <<
		"r1 = " << r1 << "\nr2 = " << r2 << 
		"\nr3 = " << r3 << std::endl;
	// Cálculo de los residuos
	std::cout << "Residuo r1: " << abs(polinomio3(a,b,c,d,r1)) <<
		"\nResiduo r2: " << abs(polinomio3(a,b,c,d,r2)) <<
		"\nResiduo r3: " << abs(polinomio3(a,b,c,d,r3)) << std::endl;
	return 0;
}
