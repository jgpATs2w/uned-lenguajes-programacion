// Fichero: lista3.cpp
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
	// Declaración de lista1
	std::list<int> lista1;     // lista1 está vacía
	// Añadir elementos al final de lista1
	for (int i=0;i<10;i++)
		lista1.push_back(i);  // lista1: (0,1,2,3,4,5,6,7,8,9)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;

	// Declaración con inicialización especificando sublista
	std::list<int>::iterator p1 = lista1.begin(); // p1 apunta al elemento 1 de lista1
	p1++;                // p1 apunta al elemento 2 de lista1
	p1++;                // p1 apunta al elemento 3 de lista1 
	p1++;                // p1 apunta al elemento 4 de lista1 
	p1++;                // p1 apunta al elemento 5 de lista1
	p1++;                // p1 apunta al elemento 6 de lista1
	std::cout << "p1 apunta al elemento:\t" << *p1 << std::endl;  // *p1 vale 5

	std::list<int>::iterator p2 = lista1.end();   // p2 apunta una posición pasado el último elemento
	p2--;                // p2 apunta al elemento lista1.size() de lista1
	p2--;                // p2 apunta al elemento lista1.size()-1 de lista1
	std::cout << "p2 apunta al elemento:\t" << *p2 << std::endl;  // *p2 vale 8

	// Inicialización especificando sublista
	std::list<int> lista2(p1,p2);  // lista2: (5,6,7)
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;
	return 0;
}
