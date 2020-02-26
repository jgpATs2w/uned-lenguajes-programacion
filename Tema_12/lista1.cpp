// Fichero: lista1.cpp
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
	// Declaración de una lista de elementos de tipo int
	std::list<int> lista1;     // lista1 está vacía
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	// Añadir 3 elementos con valor 0, 1, 2 al final de lista1
	for (int i=0;i<3;i++)
		lista1.push_back(i);  // lista1: (0,1,2)
	// Añadir 3 elementos con valor 0, 10, 20 al comienzo de lista1
	for (int i=0;i<30;i+=10)
		lista1.push_front(i); // lista1: (20,10,0,0,1,2)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	// Borrar el primer elemento de lista1
	lista1.pop_front();   // lista1: (10,0,0,1,2)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	// Borrar el último elemento de lista1
	lista1.pop_back();    // lista1: (10,0,0,1)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	return 0;
}
