// Fichero: entradaDesdeTeclado.cpp
#include <iostream>
#include <string>

int main()
{
	// Pregunta el nombre
	std::cout << "Por favor, escribe tu nombre: ";

	// Lee el nombre que el usuario escribe en el teclado
	std::string nombre;
	std::cin >> nombre;

	// Escribe un saludo
	std::cout << "Hola " << nombre << "!" << std::endl;
	return 0;
}

