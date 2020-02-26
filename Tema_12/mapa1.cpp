// Fichero: mapa1.cpp
#include <iostream>
#include <map>
#include <sstream>
#include <string>

std::string mapa2string(std::map<std::string,int> &mapa) {
	if (mapa.empty()) 
		return "(mapa vacio)";
	std::stringstream ss;
	if (mapa.size()==1) {
		ss << "(" << mapa.size() << " elemento):\n";
	} else {
		ss << "(" << mapa.size() << " elementos):\n";
	}
	std::map<std::string,int>::iterator p = mapa.begin();
	while (p!=mapa.end()) {
		ss << "(" << p->first << ", " << p->second << ")\n";
		p++;
	}
	return ss.str();
}

int main()
{	
	// Declaración de un mapa
	std::map<std::string,int> planetas;
	std::cout << "Contenido del mapa " << mapa2string(planetas) << std::endl;
	// Inserción de elementos usando operador [ ]
	// clave: nombre planeta, valor: distancia al sol en millones de km
	planetas["Mercurio"] = 57;    planetas["Venus"]    = 107;
	planetas["Tierra"]   = 150;   planetas["Marte"]    = 229;
	planetas["Jupiter"]  = 0;     planetas["Saturno"]  = 1429;
	planetas["Urano"]    = 2871;  planetas["Neptuno"]  = 4496;
	planetas["Pluton"]   = 5869;
	// Escritura en pantalla de los elementos del mapa
	std::cout << "Contenido del mapa " << mapa2string(planetas) << std::endl;
	// Modificación del valor de un elemento del mapa
	std::cout << "Insertando Jupiter ..." << std::endl;
	planetas["Jupiter"] = 777;
	// Escritura en pantalla del elemento con clave "Jupiter"
	std::cout << "El planeta Jupiter esta a " <<
		    planetas["Jupiter"] << " millones de Km del sol\n" << std::endl;
	// Escritura en pantalla de un elemento cuya clave no existe
	std::cout << "Intentando acceder al planeta XXX ..." << std::endl;
	std::cout << "El planeta XXX esta a " <<
		    planetas["XXX"] << " millones de Km del sol" << std::endl;
	// Escritura en pantalla de los elementos del mapa
	std::cout << "Contenido del mapa " << mapa2string(planetas) << std::endl;
	return 0;
}
