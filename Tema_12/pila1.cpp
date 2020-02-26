// Fichero: pila1.cpp
#include <iostream>
#include <stack>
#include <string>

int main()
{	
	// Declaración de una pila
	std::stack<int> pila;
	// Insertar elementos en la pila
	for (int i=0; i<10; i++)
		pila.push(i);
	std::cout << "La pila contiene " << pila.size() << 
		" elementos" << std::endl;
	while (!pila.empty()) {
		std::cout << pila.top() << " "; // Acceso
		pila.pop();                     // Eliminación
	}
	return 0;
}
