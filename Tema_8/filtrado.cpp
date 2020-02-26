// Fichero: filtrado.cpp
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

// Fichero de entrada (fichI) y salida (fichO)
const std::string fichI = "sig.dat";
const std::string fichO = "sig_FIL.txt";
const int ordenFiltro = 50;

int main()
{
	// Apertura del fichero de entrada
	std::ifstream fich_in(fichI.c_str(), std::ios::in);
	if (!fich_in) {
		std::cout << "ERROR: No es posible abrir el fichero " <<
			fichI << std::endl;
		return 1;
	}
	// Carga del fichero en un vector
	double dato;
	std::vector<double> senal;
	while (fich_in >> dato) {
		senal.push_back(dato);
	}
	if (!fich_in.eof()) {
		std::cout << "Error de lectura del fichero" << std::endl;
		return 1;
	}
	fich_in.close();
	// Apertura del fichero de salida
	std::ofstream fich_out(fichO.c_str(), std::ios::out | std::ios::trunc);
	if (!fich_out) {
		std::cout << "ERROR: No es posible abrir el fichero " <<
			fichO << std::endl;
		return 1;
	}
	// Filtrado de la señal
	for (int i=0; i<senal.size()-ordenFiltro; i++) {
		double media = 0;
		for (int j=i; j<i+ordenFiltro; j++)
			media += senal[j];
		fich_out << media/ordenFiltro << "\n";
	}
	fich_out.close();
	return 0;
}

