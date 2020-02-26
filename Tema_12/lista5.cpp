// Fichero: lista5.cpp
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
	// Declaración de iteradores
	std::list<int>::iterator p, p1, p2;
	// Declaración e inicialización de lista1
	std::list<int> lista1(4,10);     // lista1: (10,10,10,10)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;

	// Declaración de lista2
	std::list<int> lista2;
	// Añadir elementos al final de lista1
	for (int i=0;i<10;i++)
		lista2.push_back(i);  // lista2: (0,1,2,3,4,5,6,7,8,9)
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;

	// Insertar una sublista de lista2 en lista1
	p = lista1.begin();  // p apunta al elemento 1 de lista1
	p++;                 // p apunta al elemento 2 de lista1
	p1 = lista2.begin(); // p1 apunta al elemento 1 de lista2
	for (int i=0; i<5; i++) 
		p1++;            // p1 apunta al elemento 6 de lista2
	p2 = p1;             // p2 apunta al elemento 6 de lista2
	p2++; p2++; p2++;    // p2 apunta al elemento 9 de lista2
	std::cout << "El elemento al que apunta p1 vale:\t" << *p1 << std::endl;
	std::cout << "El elemento al que apunta p2 vale:\t" << *p2 << std::endl;
	lista1.insert(p,p1,p2); // lista1: (10,5,6,7,10,10,10)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	return 0;
}
