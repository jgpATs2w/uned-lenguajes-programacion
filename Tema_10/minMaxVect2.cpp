// Fichero: minMaxVect2.cpp
#include <iostream>
#include <vector>
#include <stdexcept>

void minMaxVect( const std::vector<double> &v, 
				 double &valMin, double &valMax ) 
				 throw ( std::domain_error )
{
/*
 * Parámetros por referencia:
 *		valMin: valor del componente cuyo valor es menor
 *		valMax: valor del componente cuyo valor es mayor
 */ 
	if (!v.size()) 
		throw std::domain_error("Vector con cero componentes");
	valMin = v[0];
	valMax = v[0];
	for (unsigned int i=1; i<v.size(); i++) {
		if (v[i]<valMin) valMin=v[i];
		if (v[i]>valMax) valMax=v[i];
	}
	return;
}

int main()
{
	std::vector<double> vec;
	std::cout << "Introduzca los valores: ";
	double x;
	while (std::cin >> x)
		vec.push_back(x);
	if (std::cin.fail() && !std::cin.eof()) {
		std::cerr << "Valores no validos" << std::endl;
		return -1;
	}
	double valorMin, valorMax;
	try {
	   minMaxVect(vec,valorMin,valorMax);
	} catch (std::domain_error exc) {
		std::cerr << "No ha introducido ningun valor" << std::endl;
		return -1;
	}
	std::cout << "Valor minimo:\t" << valorMin <<
			"\nValor maximo:\t" << valorMax << std::endl;
	return 0;
}


