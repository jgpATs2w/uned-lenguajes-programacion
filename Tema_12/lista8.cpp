// Fichero: lista8.cpp
#include <iostream>
#include <list>
#include <sstream>
#include <string>

std::string listaString2string(std::list<std::string> &lst) {
	std::stringstream ss;
	if (lst.empty()) {
		ss << "(lista vacia)";
	} else {
		std::list<std::string>::iterator p = lst.begin();
		ss << "(" << lst.size() << " elementos):\t";
		for (unsigned int i=1; i<lst.size(); i++) {
			ss << (*p) << ", ";
			if (i!=0 && i%5==0) 
				ss << "\n"; // Salto de línea cada 5 elementos
			p++;
		}
		ss << (*p);
	}
	return ss.str();
}

int main()
{	
	std::list<std::string> lista1;
	lista1.push_back("Toledo");       lista1.push_back("Cuenca"); 
	lista1.push_back("Ciudad Real");  lista1.push_back("Albacete"); 
	lista1.push_back("Guadalajara"); 	
	std::cout << "Lista1:\n" << 
		listaString2string(lista1) << std::endl;
	lista1.sort();
	std::cout << "Lista1 ordenada:\n" << 
		listaString2string(lista1) << std::endl;

	std::list<std::string> lista2;
	lista2.push_back("Palencia");   lista2.push_back("Burgos"); 
	lista2.push_back("Salamanca");  lista2.push_back("Segovia"); 
	lista2.push_back("Leon");       lista2.push_back("Soria"); 
	lista2.push_back("Zamora");     lista2.push_back("Avila"); 
	lista2.push_back("Valladolid"); 
	std::cout << "Lista2:\n" << 
		listaString2string(lista2) << std::endl;
	lista2.sort();
	std::cout << "Lista2 ordenada:\n" << 
		listaString2string(lista2) << std::endl;

	lista1.merge(lista2);
	std::cout << "Lista1 tras merge:\n" << 
		listaString2string(lista1) << std::endl;
	std::cout << "Lista2 tras merge:\n" << 
		listaString2string(lista2) << std::endl;

	return 0;
}
