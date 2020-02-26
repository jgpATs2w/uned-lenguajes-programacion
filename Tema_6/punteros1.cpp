// Fichero: punteros1.cpp
#include <iostream>

int main()
{
	int  i = 30;  // i: variable entera
	int *p;       // p: puntero a un entero
	p = &i;       // p apunta a i
	std::cout << "Valor apuntado por p: " << *p << std::endl;
	i = 15;
	std::cout << "Valor apuntado por p: " << *p << std::endl;
	return 0;
}

