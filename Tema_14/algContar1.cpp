// Fichero: algContar1.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{	
	std::vector<int> vec;
	vec.push_back(1); vec.push_back(2); vec.push_back(1);
	vec.push_back(2); vec.push_back(1); vec.push_back(1);
	// Escritura en la consola de los componentes del vector
	for (unsigned int i=0; i<vec.size(); i++)
		std::cout << "vec[" << i << "] = " << vec[i] << " "; 
	std::cout << "\n" << std::endl;
	// Número de componentes con valor 0, 1, 2 en el vector
	for (int val=0; val<3; val++) 
		std::cout << "Numero de componentes con valor " << val <<
		" en vec: " << count(vec.begin(),vec.end(),val) << std::endl;
	std::cout << "\n";
	// Número de componentes con valor 0, 1, 2 en v[2],...,v[4]
	for (int val=0; val<3; val++) 
		std::cout << "Numero de componentes con valor " << val <<
		" en v[2],...,v[4]: " << count(vec.begin()+2,vec.end()-1,val) << std::endl;
	return 0;
}
