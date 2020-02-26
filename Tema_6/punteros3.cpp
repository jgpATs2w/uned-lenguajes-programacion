// Fichero: punteros3.cpp
#include <iostream>

int main()
{
	int  i1, i2, *p1, *p2;

	// ----------------
	// Caso 1:  p1 = p2
	// ----------------
	std::cout << "Caso 1 (p1=p2)" << std::endl;
	i1 = 1; 
	i2 = 2;
	p1 = &i1;       // p1 apunta a i1
	p2 = &i2;       // p2 apunta a i2
	p1 = p2;        // Hace que p1 apunte a i2
	std::cout << "i1: Valor " << i1 << ",\tDireccion "      << &i1 << "\n";
	std::cout << "i2: Valor " << i2 << ",\tDireccion "      << &i2 << "\n";
	std::cout << "p1: Valor " << p1 << ",\tApunta al dato " << *p1 << "\n";
	std::cout << "p2: Valor " << p2 << ",\tApunta al dato " << *p2 << std::endl;

	// ------------------
	// Caso 2:  *p1 = *p2
	// ------------------
	std::cout << "\nCaso 2 (*p1=*p2)" << std::endl;
	i1 = 1; 
	i2 = 2; 
	p1 = &i1;       // p1 apunta a i1, 
	p2 = &i2;       // p2 apunta a i2
	*p1 = *p2;      // Escribe i2 en i1
	std::cout << "i1: Valor " << i1 << ",\tDireccion "      << &i1 << "\n";
	std::cout << "i2: Valor " << i2 << ",\tDireccion "      << &i2 << "\n";
	std::cout << "p1: Valor " << p1 << ",\tApunta al dato " << *p1 << "\n";
	std::cout << "p2: Valor " << p2 << ",\tApunta al dato " << *p2 << std::endl;

	return 0;
}

