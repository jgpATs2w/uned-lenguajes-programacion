// Fichero: vectorAcceso2.cpp
#include <iostream>
#include <stdexcept>
#include <vector>

int main()
{	
	std::vector<double> v(4,0);   // v = (0,0,0,0)
	try {
	   // Asignación de valor a los componentes
	   v.at(0) = 1;
	   v.at(1) = 3*v.at(0);
	   v.at(2) = 5*v.at(1) + v.at(0);
	   v.at(3) = 7*v.at(2) + 2*v.at(1) + v.at(0);
	   // Lectura del valor de los componentes
	   std::cout << "v = ( " << v.at(0) << ", " <<
		   v.at(1) << ", " << v.at(2) << ", " << v.at(3) << " )" << std::endl;
	   // Intento de acceso fuera de rango. Lanza la excepción
	   std::cout << "Esta línea no se imprime " << v.at(4) << std::endl;
	} catch (std::out_of_range) {
		std::cerr << "Error: vector v fuera de rango" << std::endl;
	}
	return 0;
}
