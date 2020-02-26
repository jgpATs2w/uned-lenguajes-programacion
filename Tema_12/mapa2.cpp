// Fichero: mapa2.cpp
#include <iostream>
#include <map>
#include <string>

int main()
{	
	// Declaración de un mapa
	std::map<std::string,int> planetas;
    // Declaración de pair <iterador,bool>
	std::pair<std::map<std::string,int>::iterator,bool> par;

	// Inserción de elementos en el mapa
	// clave: nombre planeta, valor: distancia al sol en millones de km
	std::cout << "Insertando (Mercurio,57) ..." << std::endl;
	par = planetas.insert(std::pair<std::string,int>("Mercurio",57));
	if (par.second) {
		std::cout << "Se ha insertado (" <<
			(par.first)->first << ", " << 
			(par.first)->second << ")" << std::endl;
	} else {
		std::cout << "No insertado. Existia un elemento con esa clave: " <<
			(par.first)->first << ", " << 
			(par.first)->second << std::endl;
	}

	std::cout << "\nInsertando (Venus,0) ..." << std::endl;
	par = planetas.insert(std::pair<std::string,int>("Venus",0));
	if (par.second) {
		std::cout << "Se ha insertado (" <<
			(par.first)->first << ", " << 
			(par.first)->second << ")" << std::endl;
	} else {
		std::cout << "No insertado. Existia un elemento con esa clave: " <<
			(par.first)->first << ", " << 
			(par.first)->second << std::endl;
	}

	std::cout << "\nInsertando (Venus,107) ..." << std::endl;
	par = planetas.insert(std::pair<std::string,int>("Venus",107));
	if (par.second) {
		std::cout << "Se ha insertado (" <<
			(par.first)->first << ", " << 
			(par.first)->second << ")" << std::endl;
	} else {
		std::cout << "No insertado. Existia (" <<
			(par.first)->first << ", " << 
			(par.first)->second << ")" << std::endl;
	}

	// Escritura en pantalla de los elementos del mapa
	std::cout << "\nContenido del mapa: " << std::endl;
	std::map<std::string,int>::iterator p = planetas.begin();
	while (p!=planetas.end()) {
		std::cout << "(" << p->first << ", " << p->second << ")\n";
		p++;
	}
	std::cout << std::endl;
	return 0;
}
