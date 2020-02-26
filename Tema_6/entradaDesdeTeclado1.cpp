// Fichero: entradaDesdeTeclado1.cpp
#include <iostream>
#include <string>

int main()
{
	// Pregunta el nombre
	std::cout << "Por favor, escribe tu nombre: ";

	// Lee el nombre que el usuario escribe en el teclado
	std::string nombre1, nombre2;
	std::cin >> nombre1;
	std::cin >> nombre2;

	// Escribe un saludo
	std::cout << "Hola " << nombre1 << " " << nombre2 << "!" << std::endl;
	return 0;
}

