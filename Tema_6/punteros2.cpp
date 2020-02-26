// Fichero: punteros2.cpp
#include <iostream>

int main()
{
	int  i = 30;  // i: variable entera
	int *p;       // p: puntero a un entero
	p = &i;       // p apunta a i
	std::cout << "Valor de p: "           <<  p << std::endl;
	std::cout << "Valor apuntado por p: " << *p << std::endl;
	std::cout << "Valor de i: "           <<  i << std::endl;
	*p = 25;      // El valor de i pasa a ser 25 
	std::cout << "Valor apuntado por p: " << *p << std::endl;
	std::cout << "Valor de i: "           <<  i << std::endl;
	return 0;
}

