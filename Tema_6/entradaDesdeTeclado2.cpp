// Fichero: entradaDesdeTeclado2.cpp
#include <iostream>
#include <string>

int main()
{
	// Pregunta el nombre
	std::cout << "Por favor, escribe nombres y edades: ";

	// Lee el nombre que el usuario escribe en el teclado
	std::string nombre1, nombre2;
	int edad1, edad2;
	std::cin >> nombre1;
	std::cin >> edad1;
	std::cin >> nombre2;
	std::cin >> edad2;

	// Escribe el nombre y la edad
	std::cout << nombre1 << " tiene " << edad1 << " meses" << std::endl;
	std::cout << nombre2 << " tiene " << edad2 << " meses" << std::endl;
	return 0;
}

