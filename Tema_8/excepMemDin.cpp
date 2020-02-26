// Fichero: excepMemDin.cpp
#include <iostream>
#include <new>

int main()
{
	int *p; 
	try {
		p = new int;  
	} catch (std::bad_alloc ex) {
		std::cout << "No queda memoria disponible" << std::endl;
		return -1;
	}
	*p = 3;       
	std::cout << "En la posicion de memoria " << p
	   << " esta almacenado el valor " << *p << std::endl;
   return 0;
}


