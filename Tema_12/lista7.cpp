// Fichero: lista7.cpp
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

void inicializaLista1(std::list<int> &lst) {
	lst.clear();
	for (int i=1;i<6;i++) 
		lst.push_back(i);    // lst: (1,2,3,4,5)
	return;
}

void inicializaLista2(std::list<int> &lst) {
	lst.clear();
	for (int i=1;i<6;i++) {
		lst.push_back(10*i); // lst: (10,20,30,40,50)
	}

}

int main()
{	
	// Declaración de iteradores
	std::list<int>::iterator p, p1, p2;
	// Declaración de lista1
	std::list<int> lista1, lista2;     // lista1 está vacía

	std::cout << "---------------------------------" << std::endl;
	inicializaLista1(lista1);
	inicializaLista2(lista2);
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;
	// Movimiento de todos los elementos de una lista a otra lista
	p = lista1.begin(); p++; p++; p++;
	std::cout << "El elemento apuntado por p vale:\t" << *p << std::endl;
	lista1.splice(p,lista2);  // lista1: (1,2,3,10,20,30,40,50,4,5)
	                          // lista2 está vacía
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;
	std::cout << "El elemento apuntado por p vale:\t" << *p << std::endl;

	std::cout << "---------------------------------" << std::endl;
	inicializaLista1(lista1);
	inicializaLista2(lista2);
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;
	p = lista1.begin(); p++; p++; p++;
	std::cout << "El elemento apuntado por p vale:\t" << *p << std::endl;
	p1 = lista2.begin(); p1++;
	std::cout << "El elemento apuntado por p1 vale:\t" << *p1 << std::endl;
	lista1.splice(p,lista2,p1);
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;
	std::cout << "El elemento apuntado por p vale:\t" << *p << std::endl;

	std::cout << "---------------------------------" << std::endl;
	inicializaLista1(lista1);
	inicializaLista2(lista2);
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;
	p = lista1.begin(); p++; p++; p++;
	std::cout << "El elemento apuntado por p vale:\t" << *p << std::endl;
	p1 = lista2.begin(); p1++;
	std::cout << "El elemento apuntado por p1 vale:\t" << *p1 << std::endl;
	p2 = p1; p2++; p2++;
	std::cout << "El elemento apuntado por p2 vale:\t" << *p2 << std::endl;
	lista1.splice(p,lista2,p1,p2);
	std::cout << "lista1 " << listaInt2string(lista1) << std::endl;
	std::cout << "lista2 " << listaInt2string(lista2) << std::endl;
	std::cout << "El elemento apuntado por p vale:\t" << *p << std::endl;
	std::cout << "El elemento apuntado por p2 vale:\t" << *p2 << std::endl;

	return 0;
}
