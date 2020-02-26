// Fichero: testKS.cpp
#include<iostream>
#include<list>
#include<fstream>
#include<string>
#include<cmath>

const std::string nombreFich = "datosKS.txt";
const double rangeInf = 0;
const double rangeSup = 10000;

double KStest(std::list<double>& datos, double rangoInf, double rangoSup) {
	// Normalización de los datos al rango [rangoInf,rangoSup]
	std::list<double> datosN;
	double rango = rangoSup - rangoInf;
	std::list<double>::iterator p = datos.begin();
	while (p!=datos.end()) {
		datosN.push_back( ((*p)-rangoInf)/rango );
		p++;
	}		
	// Ordenación de la lista
	datosN.sort();
	// Algoritmo K-S
	double D = 0;
	std::list<double>::iterator pN = datosN.begin();
	double i = 0;
	int n_datos = datos.size();
	while (pN!=datosN.end()) {
		double aux_s = fabs( (*pN) - (i+1)/n_datos );
		double aux_i = fabs( (*pN) - i/n_datos );
		if (aux_s > D) D = aux_s;
		if (aux_i > D) D = aux_i;
		pN++;
		i++;
	}		
	return D;
}

int main() {
	// Apertura del fichero
	std::ifstream fich_in(nombreFich.c_str(), std::ios::in);
	if (!fich_in) {
		std::cout << "ERROR: No es posible abrir el fichero " <<
			nombreFich << std::endl;
		return 1;
	}
	// Lectura del fichero y almacenamiento en una lista
	double dato;
	std::list<double> listaDatos;
	while (fich_in >> dato) {
		listaDatos.push_back(dato);
	}
	if (!fich_in.eof()) {
		std::cout << "Error de lectura del fichero" << std::endl;
		return 1;
	}
	fich_in.close();
	// Invocación a la función que realiza el test K-S
	std::cout << "Resultado del test K-S: " <<
		KStest(listaDatos,rangeInf,rangeSup);
	return 0;
}
