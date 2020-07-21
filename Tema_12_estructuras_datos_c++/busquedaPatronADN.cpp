#include<iostream>
#include<string>
#include<queue>
#include<fstream>

const std::string nombreFich = "genetic.txt";

int main()
{
	// Entrada del patr�n a buscar
	std::string strPatron;
	std::cout << "Introduzca la secuencia a buscar: ";
	std::cin >> strPatron;
	// Comprobaci�n del patr�n
	int longitudPatron = strPatron.length();
	if (longitudPatron<1) {
		std::cout << "Patron no valido" << std::endl;
		return 0;
	}
	for (int i=0; i<longitudPatron; i++) {
		if (strPatron[i]!='A' && strPatron[i]!='G' &&
			strPatron[i]!='C' && strPatron[i]!='T') {
				std::cout << "Patron no valido" << std::endl;
				return 0;
		}
	}
	// Copia del patr�n en una pila
	std::queue<char> colaPatron;
	for (int i=0; i<longitudPatron; i++) 
		colaPatron.push(strPatron[i]);
	// Apertura del fichero con la cadena de ADN 
	std::ifstream fich_in(nombreFich.c_str(), std::ios::in);
	if (!fich_in) {
		std::cout << "ERROR: No es posible abrir el fichero " <<
			nombreFich << std::endl;
		return 1;
	}
	char baseNucleotida;
	std::queue<char> colaFichero;
	int numCaracter = 0;
	int numCoincidencias = 0;
	// Carga del fichero a una cola y comparaci�n con el patr�n
	while (fich_in >> baseNucleotida) {
		numCaracter++;
		colaFichero.push(baseNucleotida);
		if (colaFichero.size()>longitudPatron)
			colaFichero.pop();
		if (colaFichero==colaPatron) {
			std::cout << "Concidencia posicion " <<
				(numCaracter-longitudPatron+1) << std::endl;
			numCoincidencias++;
		}
	}
	if (!fich_in.eof()) {
		std::cout << "Error de lectura del fichero" <<
			std::endl;
		return 1;
	}
	std::cout << "Num. coincidencias: " <<
		numCoincidencias << std::endl;
	fich_in.close();
	return 0;
}
