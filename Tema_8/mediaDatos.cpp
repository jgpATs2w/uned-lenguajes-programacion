// Fichero: mediaDatos.cpp
#include <iostream>

int main()
{	
	std::cout << "Por favor, introduzca los datos numericos: ";
	double dato      = 0;   
	double sumaDatos = 0;   
	int    numDatos  = 0; 
	while (std::cin >> dato) {
		sumaDatos += dato;
		numDatos++;
	}
	if (numDatos) {
        std::cout << "\nEl valor medio es: " << 
            sumaDatos/numDatos << std::endl;
	} else {
        std::cout << "\nNo ha introducido datos" << std::endl;
	}
	return 0;
}
