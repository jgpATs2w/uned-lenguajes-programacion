// Fichero: declaracionArray1.cpp
#include <iostream>

int main()
{
	// Declaración e inicialización del array num
	int    num[] = { 2, 3, 5, 8, 100 };
	// Escritura en la consola de los componentes de num
	std::cout << "num:\t"    
		<< num[0] << ",\t" 
		<< num[1] << ",\t"   
		<< num[2] << ",\t" 
		<< num[3] << ",\t" 
		<< num[4] << std::endl;

	// Declaración del array x
	double x[3];
	// Entrada por teclado del valor de los componentes de x
	std::cout << "Introduzca los tres componentes del vector: ";
	std::cin >> x[0] >> x[1] >> x[2];
	// Escritura en la consola del valor de los componentes de x
	std::cout << "x:\t"    
		<< x[0] << ",\t" 
		<< x[1] << ",\t"   
		<< x[2] << std::endl;

	return 0;
}

