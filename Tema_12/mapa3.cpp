// Fichero: mapa3.cpp
#include <iostream>
#include <map>
#include <string>

int main()
{	
	// Declaración de un mapa
	std::map<std::string,int> planetas;
	// Inserción de elementos usando operador [ ]
	// clave: nombre planeta, valor: distancia al sol en millones de km
	planetas["Mercurio"] = 57;    planetas["Venus"]    = 107;
	planetas["Tierra"]   = 150;   planetas["Marte"]    = 229;
	planetas["Jupiter"]  = 777;   planetas["Saturno"]  = 1429;
	planetas["Urano"]    = 2871;  planetas["Neptuno"]  = 4496;
	planetas["Pluton"]   = 5869;

	std::string planeta;
	std::cout << "Escriba el nombre del planeta: ";
	std::cin >> planeta;

	// Busqueda del elemento con esa clave
	std::map<std::string,int>::iterator p;
	p = planetas.find(planeta);  

	// Escritura en consola de la clave y valor del elemento
	if (p!=planetas.end()) {
	    std::cout << "El planeta " << 
		    p->first  << " esta a " <<
		    p->second << " millones de Km del sol" << 
			std::endl;
	} else {
		std::cout << "El planeta " << planeta <<
			" no esta en el mapa" << std::endl;
	}
	return 0;
}
