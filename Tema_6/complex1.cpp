// Fichero: complex1.cpp
#include <iostream>
#include <complex>

int main()
{
	// Declaración e inicialización, especificando coordenadas cartesianas
	std::complex<double> x(2,5);   // x = 2 + 5i

	// Coordenadas polares de x
	double x_m2 = pow(x.real(),2) + pow(x.imag(),2);
	double x_m = sqrt( x_m2 );
	double x_arg = atan2(x.imag(),x.real());
	std::cout << "Modulo de x = " 
		<< x_m << " = " 
		<< abs(x) << std::endl;
	std::cout << "Modulo de x al cuadrado = " 
		<< x_m2 << " = " 
		<< norm(x) << std::endl;
	std::cout << "Argumento de x = " 
		<< x_arg << " = " 
		<< arg(x) << std::endl;

	std::complex<double> i(0,1);   // i: unidad imaginaria
	std::cout << "x = " << x << " = " 
		<< x_m*exp(i*x_arg) << std::endl;

	// Conjugado
	std::cout << "x conjugado = " << conj(x) << std::endl;

	// Cálculo de exp(x) usando la fórmula de Euler
	double exp_x_r = exp(x.real()) * cos(x.imag());
	double exp_x_i = exp(x.real()) * sin(x.imag());
	std::cout << "exp(x) = " << exp(x) << " = " 
		<< ( exp_x_r + i*exp_x_i ) << std::endl;

	std::complex<double> y = 2.0*x;
	std::cout << "y = " << y << std::endl;

	// Suma, resta, producto y división
	std::cout << "y+x = " << y+x << std::endl;
	std::cout << "y-x = " << y-x << std::endl;
	std::cout << "y*x = " << y*x << std::endl;
	std::cout << "y/x = " << y/x << std::endl;

	return 0;
}

