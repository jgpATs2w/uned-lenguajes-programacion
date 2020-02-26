// Fichero: lista6.cpp
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
	std::list<int>::iterator p,p1, p2;
	// Declaración de lista1
	std::list<int> lista1;     // lista1 está vacía
	// Añadir elementos al final de lista1
	for (int i=0;i<10;i++)
		lista1.push_back(i);  // lista1: (0,1,2,3,4,5,6,7,8,9)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;

	// Eliminación de una sublista
	p1 = lista1.begin(); // p1 apunta al elemento 1 de lista1
	for (int i=0; i<5; i++) 
		p1++;            // p1 apunta al elemento 6 de lista1
	p2 = p1;             // p2 apunta al elemento 6 de lista1
	p2++; p2++; p2++;    // p2 apunta al elemento 9 de lista1
	std::cout << "El elemento al que apunta p1 vale:\t" << *p1 << std::endl;
	std::cout << "El elemento al que apunta p2 vale:\t" << *p2 << std::endl;
	p=lista1.erase(p1,p2); // lista1: (0,1,2,3,4,8,9)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "El elemento apuntado por p vale:\t" << *p << std::endl;

	// Eliminación de un elemento
	p1=lista1.erase(p); // lista1: (0,1,2,3,4,9)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "El elemento apuntado por p1 vale:\t" << *p1 << std::endl;

	return 0;
}
