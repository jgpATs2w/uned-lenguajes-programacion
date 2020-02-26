// Fichero: division2num.cpp
#include <iostream>

int main()
{	
	double x, y;

	std::cout << "Introduzca dos numeros: ";
	std::cin >> x >> y;
    if ( y ) 
		std::cout << "Resultado: " << x/y << std::endl;
    else 
		std::cout << "ERROR: division por cero" << std::endl;
	
	return 0;
}
