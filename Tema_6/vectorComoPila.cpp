// Fichero: vectorComoPila.cpp
#include <iostream>
#include <vector>

int main()
{	
	// Inicialización (tamaño,valor)
	std::vector<double> v(3,10); // v = (10,10,10)
 	std::cout << "1. Num componentes: " << v.size() <<  
	             ",\tv = ( " << v[0] << ", " << v[1] << ", " << 
				 v[2] << ")" << std::endl;
	// push_back
	v.push_back(5);   // v = (10,10,10,5)
    std::cout << "2. Num componentes: " << v.size() <<
	             ",\tv = ( " << v[0] << ", " << v[1] << ", " <<
		          v[2] << ", " << v[3] << ")" << std::endl;
	// pop_back
	v.pop_back();  // v = (10,10,10)
    std::cout << "3. Num componentes: " << v.size() <<  
	             ",\tv = ( " << v[0] << ", " << v[1] << ", " << 
				 v[2] <<  ")" << std::endl;
	return 0;
}
