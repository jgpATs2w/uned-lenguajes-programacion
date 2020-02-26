// Fichero: declaracionArray2.cpp
#include <iostream>

int main()
{
	// Declaración e inicialización del array
	int  coords[][2] = {
		{ 1, 2 },
		{ 3, 4 },
		{ 5, 6 }
	};
	// Escritura en la consola de los componentes de coords
	std::cout << "coords:\n"    
		<< coords[0][0] << ",\t" << coords[0][1] << "\n"
		<< coords[1][0] << ",\t" << coords[1][1] << "\n"
		<< coords[2][0] << ",\t" << coords[2][1] << std::endl;

	// Declaración del array x
	double x[3][2];
	// Entrada por teclado del valor de los componentes de x
	std::cout << "Introduzca los seis componentes de x: ";
	std::cin >> x[0][0] >> x[0][1] >> 
		        x[1][0] >> x[1][1] >>
		        x[2][0] >> x[2][1];

	// Escritura en la consola del valor de los componentes de x
	std::cout << "x:\n"    
		<< x[0][0] << ",\t" << x[0][1] << "\n"
		<< x[1][0] << ",\t" << x[1][1] << "\n"
		<< x[2][0] << ",\t" << x[2][1] << std::endl;

	return 0;
}

