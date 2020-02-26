// Fichero: lista4.cpp
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
	std::list<int>::iterator p, p1;
	// Declaración de lista1
	std::list<int> lista1;     // lista1 está vacía
	// Añadir elementos al final de lista1
	for (int i=0;i<10;i++)
		lista1.push_back(i);  // lista1: (0,1,2,3,4,5,6,7,8,9)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;

	// Insertar un elemento en lista1
	p = lista1.begin();  // p apunta al elemento 1 de lista1
	p++;                 // p apunta al elemento 2 de lista1
	p++;                 // p apunta al elemento 3 de lista1
	p++;                 // p apunta al elemento 4 de lista1
	std::cout << "El elemento al que apunta p vale:\t" << *p << std::endl;
	p1 = lista1.insert(p,-5);   //  lista1: (0,1,2,-5,3,4,5,6,7,8,9)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "El elemento al que apunta p vale:\t" << *p << std::endl;
	std::cout << "El elemento al que apunta p1 vale:\t" << *p1 << std::endl;

	// Insertar varios elementos consecutivos con el mismo valor
	lista1.insert(p,2,-3);   //  lista1: (0,1,2,-5,-3,-3,3,4,5,6,7,8,9)
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "El elemento al que apunta p vale:\t" << *p << std::endl;

	return 0;
}
