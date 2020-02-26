// Fichero: ficheros1.cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

int main()
{	
	// Apertura del fichero para lectura
	std::fstream f("F:/NOVALE/datos.txt",std::ios::in | std::ios::out);
	if (!f) {
		std::cout << "No se puede abrir el fichero" << std::endl;
		return 1;
	}

	// Lectura del fichero caracter a caracter
	char c;
	std::stringstream s;
	while (!f.eof()) {
		f >> std::noskipws >> c;
		if (!f.eof()) {
		    s << c;
		}
	}
	f.close();
	std::cout << s.str() << std::endl;
	return 0;
}
