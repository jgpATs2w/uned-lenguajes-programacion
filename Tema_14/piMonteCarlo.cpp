// Fichero: piMonteCarlo.cpp
#include<iostream>
#include<iomanip>
#include<list>
#include<algorithm>

const double pi = 3.14159265358979323846;

struct Punto {
	double x;
	double y;
};

bool dentroCirculo(const Punto& pto) {
	return pto.x*pto.x + pto.y*pto.y < 1;
}

int main() {
	// Número de puntos
	int nPuntos;
	std::cout << "Numero de puntos: ";
	std::cin >> nPuntos;
	// Generar puntos uniformemente distribuidos
	std::list<Punto> listaPuntos;
	Punto pto;
	for (int i=0; i<nPuntos; i++) {
		pto.x = 2.0*rand()/RAND_MAX - 1;
		pto.y = 2.0*rand()/RAND_MAX - 1;
		listaPuntos.push_back(pto);
	}
	// Declaración lista valores Booleanos
	std::list<bool> listaDentroCirc(nPuntos);
	// Transformación
	transform(listaPuntos.begin(),listaPuntos.end(),
		listaDentroCirc.begin(),dentroCirculo);
	// Contar número de elementos que valen true
	double numTrue = count( listaDentroCirc.begin(),
							listaDentroCirc.end(),true);
	// Estimación del número PI
	double estimacionPi = 4*numTrue/nPuntos;
	// Valor estimado:
	std::cout << "Valor de pi: " << std::setprecision(20) <<
			estimacionPi << '\n' <<
			"Error: " << pi-estimacionPi << "\n";
	return 0;
}


