// Fichero: algCopiar1.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{	
	/*
	 * Ejemplo 1:
	 * Algoritmo remove_copy aplicado sobre un vector
	 */
	// Declaración e inicialización del array cf
	char cf[] = "La luz del sol tarda unos 8 minutos en llegar a la tierra";
	// num_cf es el número de elementos del array cf
	int num_cf = sizeof(cf) / sizeof(cf[0]);  
	// Declaración e inicialización del vector v1_orig con los componentes del array cf
	std::vector<char> v1_orig(cf,cf+num_cf);  
	// Se declara el vector v1_dest, que tiene num_cf componentes
	std::vector<char> v1_dest(num_cf);
	// En la copia se eliminan los caracteres espacio en blanco (' ')
	// Se hace apuntar el iterador p1 al final de la copia
	// La copia está en el rango [v1_dest.begin(),p1)
	std::vector<char>::iterator p1;
	p1 = remove_copy(v1_orig.begin(),v1_orig.end(),v1_dest.begin(),' ');
	// Escritura en la consola del contenido copiado en el vector v1_dest
	for (std::vector<char>::iterator p=v1_dest.begin(); p!=p1; p++)
		std::cout << (*p);
	std::cout << std::endl;

	/*
	 * Ejemplo 2:
	 * Algoritmo replace_copy aplicado sobre un vector
	 */
	// Declaración e inicialización del string sf
	std::string sf = "La luz viaja en el vacio a 300000 km/s";
	// Declaración del vector e inicialización con los componentes del string sf
	std::vector<char> v2_orig(sf.begin(),sf.end());
	// Se declara el vector v2_dest, que tiene sf.size() componentes
	std::vector<char> v2_dest(sf.size());
	// En la copia se reemplazan los caracteres espacio en blanco (' ') por '_'
	// Se hace apuntar el iterador p2 al final de la copia
	// La copia está en el rango [v2_dest.begin(),p2)
	std::vector<char>::iterator p2;
	p2 = replace_copy(v2_orig.begin(),v2_orig.end(),v2_dest.begin(),' ','_');
	// Escritura en la consola del contenido copiado en el vector v2_dest
	// Se declara el string sv2, inicializándolo con los componentes del vector
	// que contienen la copia, que son los del rango [v2_dest.begin(),p2)
	std::string sv2(v2_dest.begin(),p2);
	std::cout << sv2 << std::endl;

	return 0;
}
