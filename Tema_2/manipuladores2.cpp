// Fichero: manipuladores2.cpp
#include <iostream>
#include <iomanip>

int main()
{	
	std::cout << "ESCRITURA EN HEXADECIMAL, OCTAL\n" << 
		"Y DECIMAL DEL VALOR DECIMAL " << 100   << 
		"\nBase\t\tValor\t\tValor (showbase)"   <<
		"\n----\t\t-----\t\t----------------\n" <<
		"Hexadecimal:\t" << std::hex << 
		100 << "\t\t" << std::showbase << 100 << "\n" <<
		"Octal:\t\t"  << std::oct << std::noshowbase <<
		100 << "\t\t" << std::showbase << 100 << "\n" <<
		"Decimal:\t"  << std::dec << std::noshowbase << 
		100 << "\t\t" << std::showbase << 100 << std::endl;
	return 0;
}
