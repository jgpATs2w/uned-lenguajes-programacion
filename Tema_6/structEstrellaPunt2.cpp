// Fichero: structEstrellaPunt2.cpp
#include <iostream>

struct Estrella {
	char   nombre[30];
	char   tipo;
	double distancia;
	int    brillo;
	double coordenadas[3];
};

int main()
{	
	Estrella e1   = { "k1", 'a', 1.75e23, 4, 1.25e4, 1.43e5, -1.32e4};
	Estrella *pE;
	pE = &e1;
	std::cout	<< "Nombre:\t\t"    << pE->nombre    << std::endl;
	std::cout	<< "Tipo:\t\t"      << pE->tipo      << std::endl;
	std::cout	<< "Distancia:\t"   << pE->distancia << std::endl;
	std::cout	<< "Brillo:\t\t"    << pE->brillo    << std::endl;
	std::cout	<< "Coordenadas:\t" << "("	
					<< pE->coordenadas[0] << ", "  
					<< pE->coordenadas[1] << ", "   
					<< pE->coordenadas[2] << ")"  << std::endl;
	return 0;
}
