// Fichero: paramPuntFunc.cpp
#include<iostream>
#include<string>
#include<vector>
#include<cmath>

std::vector<double> evalua(double (*pf)(double),
				   double t0, double h, int nSteps) {
	std::vector<double> x;
	x.reserve(nSteps);
	double t = t0;
	for (int i=0; i<=nSteps; i++) {
		double x_t = (*pf)(t);
		x.push_back(x_t);
		t += h;
	}
	return x;
}

double f1(double t) {
	return t*sin(t);
}

double f2(double t) {
	return t*t-3*cos(t)/t;
}

int main() {
	// Puntero a función
	double (*pfunc)(double);
	// Evaluación de f1 
	double t0 = 0, h = 0.1;
	int nSteps = 10;
	pfunc = f1;
	std::vector<double> xf1 = evalua(pfunc,t0,h,nSteps);
	std::cout << "f1(t) = t*sin(t)" << std::endl;
	for (int i=0; i<xf1.size(); i++)  
		std::cout << "t = " << t0+i*h << 
			"\tf1(t) = " << xf1[i] << std::endl;
	// Evaluación de f2 
	pfunc = f2;
	t0 = 0.5;
	std::vector<double> xf2 = evalua(pfunc,t0,h,nSteps);
	std::cout << "f2(t) = t*t-3*cos(t)/t" << std::endl;
	for (int i=0; i<xf1.size(); i++)  
		std::cout << "t = " << t0+i*h << 
			"\tf2(t) = " << xf2[i] << std::endl;
	return 0;
}
