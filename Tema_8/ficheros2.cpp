// Fichero: ficheros2.cpp
#include <iostream>
#include <fstream>
#include <string>

int main()
{	
	// Flujo para lectura
	char nombreFichI[] = "F:/NOVALE/datos2.txt";
	std::ifstream inFich(nombreFichI, std::ios::in);
	if (!inFich) {
		std::cout << "Error al abrir fichero para lectura" << std::endl;
		return 1;
	}

	// Flujo para escritura
	std::string nombreFichO = "F:/NOVALE/datos3.txt";
	std::ofstream outFich(nombreFichO.c_str(),
		                  std::ios::out | std::ios::trunc);
	if (!outFich) {
		std::cout << "Error al abrir fichero para escritura" << std::endl;
		return 1;
	}

	// Operaciones de lectura y escritura
	std::string s;
	while (!inFich.eof()) {
        inFich >> s;                      // Lectura de fichero
		if (!inFich.eof()) {
		    std::cout << s << std::endl;  // Escritura en consola
			outFich   << s << std::endl;  // Escritura en fichero
		}
	}

	// Cierre de los ficheros
	inFich.close();
	outFich.close();

	return 0;
}
