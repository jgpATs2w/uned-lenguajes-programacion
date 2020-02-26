// Fichero: vectorMemoria.cpp
#include <iostream>
#include <vector>

int main()
{	
	std::vector<double> v(4,0);   // v = (0,0,0,0)
	v.reserve(10);
	std::cout << "Capacidad: " << v.capacity() << std::endl;
	std::cout << "Ocupado:   " << v.size()     << std::endl;
	v.reserve(20);
	std::cout << "Capacidad: " << v.capacity() << std::endl;
	std::cout << "Ocupado:   " << v.size()     << std::endl;

	return 0;
}
