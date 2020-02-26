// Fichero: getline_cin.cpp
#include <iostream>
#include <string>
#include <vector>

int main()
{
	/*
	 * Vector en el que va a almacenarse el texto tecleado
	 * Cada componente del vector contendrá una línea tecleada
	 */
	std::vector<std::string> texto;

	/*
	 * getline( std::cin, linea ) hace que cada linea de texto
	 * tecleada se almacene en el string linea
	 * texto.push_back( linea ) añade el string linea como último
	 * componente del vector texto
	 */
	std::string linea;                 
	std::cout << "Introduzca el texto: " << std::endl;
	while( getline( std::cin, linea ) )
        texto.push_back( linea );  

	// Escritura del contenido del vector en la consola
	std::cout << "El texto introducido es: " << std::endl;
	for (unsigned int i=0; i<texto.size(); i++)
		std::cout << texto[i] << std::endl;
  return 0;
}