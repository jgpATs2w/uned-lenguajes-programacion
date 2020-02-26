// Fichero: cola1.cpp
#include <iostream>
#include <queue>
#include <string>

int main()
{	
	// Declaración de una cola
	std::queue<int> cola;

	// Añadir elementos al final de la cola
	std::cout << "Elementos puestos en la cola:\n";
	for (int i=0; i<10; i++) {
		cola.push(i);            // Añade elemento a la cola
		int &p = cola.back();    // Referencia al último elemento
		std::cout << p << " ";   // Escritura en consola
	}
	std::cout << "\nLa cola contiene " << cola.size() << 
		" elementos" << std::endl;
	std::cout << "Elementos extraidos de la cola:\n";
	while (!cola.empty()) {
		int &p = cola.front();  // Referencia al primer elemento
		std::cout << p << " ";  // Escritura en consola
		cola.pop();             // Elimina primer elemento de la cola
	}
	return 0;
}
