// Fichero: minMaxVect1.cpp
#include <iostream>
#include <vector>

bool minMaxVect( const std::vector<double> &v, 
				 double &valMin, double &valMax ) 
{
/*
 * Valor de retorno:
 *		true  si v tiene más de cero componentes
 *		false si v tiene cero componentes
 * Parámetros por referencia:
 *		valMin: valor del componente cuyo valor es menor
 *		valMax: valor del componente cuyo valor es mayor
 */ 
	if (!v.size()) return false;
	valMin = v[0];
	valMax = v[0];
	for (unsigned int i=1; i<v.size(); i++) {
		if (v[i]<valMin) valMin=v[i];
		if (v[i]>valMax) valMax=v[i];
	}
	return true;
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
	if ( minMaxVect(vec,valorMin,valorMax) ) {
		std::cout << "Valor minimo:\t" << valorMin <<
			"\nValor maximo:\t" << valorMax << std::endl;
	} else {
		std::cerr << "No ha introducido ningun valor" << std::endl;
		return -1;
	}
	return 0;
}


