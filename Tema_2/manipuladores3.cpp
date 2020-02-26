// Fichero: manipuladores3.cpp
#include <iostream>
#include <iomanip>

int main()
{	
	std::cout << 
		"Programa\tConsola\t\tConsola (boolalpha)\n"   <<
		"--------\t-------\t\t-------------------\n" <<
		"false\t\t" << 
		false       << "\t\t" <<
		std::boolalpha   << false << "\n"   <<
		"true\t\t"  << 
		std::noboolalpha << true  << "\t\t" <<
		std::boolalpha   << true  << std::endl;
	return 0;
}
