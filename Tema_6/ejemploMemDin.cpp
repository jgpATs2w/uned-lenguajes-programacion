// Fichero: ejemploMemDin.cpp
#include <iostream>

int main()
{
    std::cout << "\tDireccion\t\tValor" << std::endl;
	int *p1, *p2;   // (1)
	p1 = new int;   // (2)
	*p1 = 2;        // (3)
	std::cout << "(3)\tp1: " << p1 << "\t\t*p1: " << *p1 << std::endl;
	p2 = p1;        // (4)
	std::cout << "(4)\tp1: " << p1 << "\t\t*p1: " << *p1 << std::endl;
	std::cout << "(4)\tp2: " << p2 << "\t\t*p2: " << *p2 << std::endl;
	*p2 = 3;        // (5)
	std::cout << "(5)\tp1: " << p1 << "\t\t*p1: " << *p1 << std::endl;
	std::cout << "(5)\tp2: " << p2 << "\t\t*p2: " << *p2 << std::endl;
	p1 = new int;   // (6)
	std::cout << "(6)\tp1: " << p1 << "\t\t*p1: " << *p1 << std::endl;
	std::cout << "(6)\tp2: " << p2 << "\t\t*p2: " << *p2 << std::endl;
	*p1 = 8;        // (7)  
	std::cout << "(7)\tp1: " << p1 << "\t\t*p1: " << *p1 << std::endl;
	std::cout << "(7)\tp2: " << p2 << "\t\t*p2: " << *p2 << std::endl;
    return 0;
}


