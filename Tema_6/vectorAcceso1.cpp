// Fichero: vectorAcceso1.cpp
#include <iostream>
#include <vector>

int main()
{	
	std::vector<double> v(4,0);   // v = (0,0,0,0)
	// Asignación de valor a los componentes
	v[0] = 1;
	v[1] = 3*v[0];
	v[2] = 5*v[1]+v[0];
	v[3] = 7*v[2]+2*v[1]+v[0];
	// Lectura del valor de los componentes
	std::cout << "v = ( " << v[0] << ", " <<
		v[1] << ", " << v[2] << ", " << v[3] << " )" << std::endl;
	return 0;
}
