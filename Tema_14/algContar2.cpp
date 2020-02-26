// Fichero: algContar2.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool divisiblePor5(int n) {
// Si el resto de la división n/5 vale cero, devuelve true
// En caso contrario, devuelve false
	if ( n%5 ) return false;
	return true;
}

int main()
{	
	std::vector<int> vec;
	for (int i=0; i<26; i++)
		vec.push_back(i);
	// Escritura en la consola de los componentes del vector
	std::cout << "vec = (";
	for (unsigned int i=0; i<vec.size()-1; i++)
		std::cout << vec[i] << ","; 
	std::cout << vec[vec.size()-1] << ")" << std::endl;
	// Número de componentes divisibles por 5 en el vector
	std::cout << "Numero de componentes divisibles por 5: " <<  
		count_if(vec.begin(),vec.end(),divisiblePor5) << std::endl;
	return 0;
}
