// Fichero: tiposEnumerados.cpp
#include <iostream>

enum color {blanco, azul, rojo}; //blanco = 0, azul = 1, rojo = 2
enum talla { XS = 10, S = 20, M = 25, L = 30, XL = 35, XXL = 45 }; 

int main()
{
	color c1 = azul;
	std::cout << "Color:\t"  << c1 << std::endl;
	talla t1 = S;
	std::cout << "Talla:\t"  << t1 << std::endl;
	return 0;
}

