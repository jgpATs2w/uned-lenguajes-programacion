// Fichero: lista2.cpp
#include <iostream>
#include <list>
#include <sstream>
#include <string>

std::string listaInt2string(std::list<int> &lst) {
	std::stringstream ss;
	if (lst.empty()) {
		ss << "(lista vacia)";
	} else {
		std::list<int>::iterator p = lst.begin();
		ss << "(" << lst.size() << " elementos):\t";
		while (p!=lst.end()) {
			ss << *p << " ";
			p++;
		}
	}
	return ss.str();
}

int main()
{	
	// Declaración de una lista con inicialización (num,valor)
	std::list<int> lista1(2,100);     // lista1:  (100,100)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;

	// Modificación del valor de un elemento al que se accede mediante un iterador
	std::list<int>::iterator p = lista1.begin();  // p apunta al elemento 1 de lista1
	*p = 150;            // lista1: (150,100)
	p++;                 // p apunta al elemento 2 de lista1
	*p = *p/2;           // lista1: (150,50)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	return 0;
}
