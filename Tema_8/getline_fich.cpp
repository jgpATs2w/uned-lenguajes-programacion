// Fichero: getline_fich.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


int main()
{
	/*
	 * vector donde se almacena el contenido del fichero
	 * Cada línea del vector es un string, 
	 * que contiene una línea de texto del fichero
	 */
	std::vector<std::string> contenidoFichero;

	// Flujo para lectura
	char nombreFichI[] = "F:/NOVALE/datos2.txt";
	std::ifstream inFich(nombreFichI, std::ios::in);
	if (!inFich) {
		std::cout << "Error al abrir fichero para lectura" << std::endl;
		return 1;
	}

	// string donde se almacena la última línea leída del fichero
	std::string contenidoLinea;

	// Lectura línea a línea y almacenamiento en el vector
	while( getline( inFich, contenidoLinea ) )
		contenidoFichero.push_back( contenidoLinea );

	// Cierre del fichero
	inFich.close();

	// Escritura del vector en consola
	for (unsigned int i=0; i<contenidoFichero.size(); i++)
		std::cout << contenidoFichero[i] << std::endl;

	return 0;
}