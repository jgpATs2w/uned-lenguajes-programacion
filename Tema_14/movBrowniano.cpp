// Fichero: movBrowniano.cpp
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

const int    Nparticulas = 1000;
const int    Niter = 1000;
const double v_max = 0.01;
const double pi = 3.14159265;
const std::string nombreFich = "particulas.txt";

struct PosXY {
	double x;
	double y;
};

// Funciones para fijar condiciones iniciales
PosXY inicialPosX_0(PosXY pos) {
	pos.x = 0;
	pos.y = (double)rand()/RAND_MAX;
	return pos;
}

PosXY inicialPosX_05(PosXY pos) {
	pos.x = 0.5;
	pos.y = (double)rand()/RAND_MAX;
	return pos;
}

PosXY inicialPosAleat(PosXY pos) {
	pos.x = (double)rand()/RAND_MAX;
	pos.y = (double)rand()/RAND_MAX;
	return pos;
}

// Función para simular el movimiento Browniano
PosXY movBrowniano(PosXY pos) {
	double amp  = v_max*(double)rand()/RAND_MAX;
	double beta = 2*pi*(double)rand()/RAND_MAX;
	// Nueva posición en ausencia de rebote
	pos.x += amp*cos(beta); 
	pos.y += amp*sin(beta);
	// Corrección en caso de rebote
	if ( pos.x < 0 ) pos.x = -pos.x;
	if ( pos.y < 0 ) pos.y = -pos.y;
	if ( pos.x > 1 ) pos.x = 2-pos.x;
	if ( pos.y > 1 ) pos.y = 2-pos.y;
	return pos;
}

int main() {
	// Selección condición inicial
	std::cout << "Posibles condiciones iniciales:\n" 
				"1. Particulas sobre la linea x = 0\n" 
				"2. Particulas sobre la linea x = 0.5\n" 
				"3. Particulas distribuidas uniformemente\n" 
				"Escoja la condicion inicial:";
	char M_ini;
	std::cin >> M_ini;
	// Declaración del vector de posiciones
	std::vector<PosXY> particulas(Nparticulas);
	// Inicialización
	switch (M_ini) {
	case '1':   
		transform(particulas.begin(),particulas.end(),
			particulas.begin(),inicialPosX_0);
		break;
	case '2':   
		transform(particulas.begin(),particulas.end(),
			particulas.begin(),inicialPosX_05);

		break;
	case '3':  
		transform(particulas.begin(),particulas.end(),
			particulas.begin(),inicialPosAleat);

		break;
	default:
		std::cerr << "Opcion no valida" << std::endl;
		return 1;
	}
	for (int iter=0; iter<Niter; iter++) 
		transform(particulas.begin(),particulas.end(),
			particulas.begin(),movBrowniano);
	// Escritura en consola
	for (int i=0; i<particulas.size(); i++)  
		std::cout << particulas[i].x << " " << particulas[i].y << std::endl;
	// Escritura en fichero
	std::ofstream file_out(nombreFich.c_str(), std::ios::out | std::ios::trunc);
	if ( !file_out ) {
		std::cout << "Error al abrir el fichero" << std::endl;
		return 1;
	}
	for (int i=0; i<particulas.size(); i++)  
		file_out << particulas[i].x << " " << particulas[i].y << "\n";
	file_out.close();
	return 0;
}
