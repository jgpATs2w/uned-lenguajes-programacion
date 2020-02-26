// Fichero: estadisticos.cpp
#include<iostream>
#include <cmath>
#include <vector>
#include<fstream>
#include<string>

// Nombre del fichero que contiene los datos
const std::string nombreFich = "datos.txt";

int main()
{
	std::ifstream fich_in(nombreFich.c_str(), std::ios::in);
	if (!fich_in) {
		std::cout << "ERROR: No es posible abrir el fichero " <<
			nombreFich << std::endl;
		return 1;
	}
	// Copia el contenido del fichero al vector
	std::vector<double> vecDatos;
	double dato;
	while (fich_in >> dato) {
		vecDatos.push_back(dato);
	}
	if (!fich_in.eof()) {
		std::cout << "El fichero contiene datos no numericos" <<
			std::endl;
		return 1;
	}
	// Cierre del fichero
	fich_in.close();
	// Comprueba que el vector no está vacío
	if ( vecDatos.size() <= 1 ) {
		std::cout << "ERROR: El fichero no contiene datos suficientes" 
                          << std::endl;
		return 0;
	}
	// Cálculo de la media
	double suma = 0;
	for (int i=0; i<vecDatos.size(); i++)
		suma += vecDatos[i];
	double media = suma / vecDatos.size();
	std::cout << "Media: " << media << std::endl;
	// Cálculo de la varianza y desviación estándar
	double sumaCuad = 0;
	for (int i=0; i<vecDatos.size(); i++)
		sumaCuad += pow(vecDatos[i]-media,2);
	double var = sumaCuad / (vecDatos.size()-1);
	std::cout << "Varianza: " << var << std::endl;
	std::cout << "Desviacion estandar: " << sqrt(var) << std::endl;
	return 0;
}
