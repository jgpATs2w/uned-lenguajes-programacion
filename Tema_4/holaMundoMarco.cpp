// Fichero: holaMundoMarco.cpp
#include <iostream>
#include <string>

int main()
{
	const std::string frase = "Hola mundo!";
	const std::string subrayado(11,'-');
	std::cout << subrayado << "\n" << 
		frase << "\n" << subrayado << std::endl;
	return 0;
}

