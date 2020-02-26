// Fichero: structEstrella.cpp
#include <iostream>

struct Estrella {
	char   nombre[30];
	char   tipo;
	double distancia;
	int    brillo;
	double coordenadas[3];
};

struct EstrellaDoble {
	Estrella e1;
	Estrella e2;
};


int main()
{	
	// Declaración e inicialización
	Estrella e1   = { "k1", 'a', 1.75e23, 4, 1.25e4, 1.43e5, -1.32e4 };
	Estrella e[ ] = {
					{ "k2", 'c', 4.22e45, 3, 1.34e5, 1.43e6, -1.32e5 },
					{ "k3", 'a', 9.65e25, 2, 3.34e5, 6.64e6,  4.57e4 } 
					};
	EstrellaDoble estDob =
					{ 
					{ "k4-a", 'b', 3.22e45, 3, 4.32e5, 1.432e6, 1.323e7 },
					{ "k4-b", 'a', 3.17e45, 2, 4.34e5, 1.446e6, 1.573e7 }
					};
	// Acceso a los componentes
	std::cout	<< "Nombre\tTipo\tDistancia\tBrillo\tCoordenadas\n"  
				<< "------\t----\t---------\t------\t-----------\n"
				<< e1.nombre    << "\t" << e1.tipo		<< "\t" 
				<< e1.distancia << "\t" << e1.brillo	<< "\t"
				<< "("	<< e1.coordenadas[0] << ", "  
						<< e1.coordenadas[1] << ", "   
						<< e1.coordenadas[2] << ")"  <<  std::endl;
	for (int i=0; i<2; i++)
		std::cout	<< e[i].nombre    << "\t" << e[i].tipo		<< "\t" 
					<< e[i].distancia << "\t" << e[i].brillo	<< "\t"
					<< "("	<< e[i].coordenadas[0] << ", "  
						<< e[i].coordenadas[1] << ", "   
						<< e[i].coordenadas[2] << ")"  <<  std::endl;
	std::cout	<< estDob.e1.nombre    << "\t" << estDob.e1.tipo		<< "\t" 
				<< estDob.e1.distancia << "\t" << estDob.e1.brillo	<< "\t"
				<< "("	<< estDob.e1.coordenadas[0] << ", "  
						<< estDob.e1.coordenadas[1] << ", "   
						<< estDob.e1.coordenadas[2] << ")"  <<  std::endl;
	std::cout	<< estDob.e2.nombre    << "\t" << estDob.e2.tipo		<< "\t" 
				<< estDob.e2.distancia << "\t" << estDob.e2.brillo	<< "\t"
				<< "("	<< estDob.e2.coordenadas[0] << ", "  
						<< estDob.e2.coordenadas[1] << ", "   
						<< estDob.e2.coordenadas[2] << ")"  <<  std::endl;
    return 0;
}
