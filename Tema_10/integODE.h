// Fichero: integODE.h
#include <vector>


namespace integODE {

std::vector<double> EulerExplicito( double (*f)(double,double),
		 double t0, double x0, double h, int nPasos);

std::vector<double> EulerRichardson( double (*f)(double,double),
		 double t0, double x0, double h, int nPasos);

std::vector<double> RungeKutta4( double (*f)(double,double),
		 double t0, double x0, double h, int nPasos);

}
