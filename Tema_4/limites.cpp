// Fichero limites.cpp
#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
	std::cout << std::setprecision(9) <<
	"Tipo\t\t\tmin\t\tmax\t\tepsilon\n" <<
	"----\t\t\t---\t\t---\t\t-------\n" <<
	"int\t\t\t" << 
	std::numeric_limits<int>::min() << "\t" <<
	std::numeric_limits<int>::max() << "\t" <<
	std::numeric_limits<int>::epsilon() << "\n" <<
	"unsigned int\t\t" << 
	std::numeric_limits<unsigned int>::min() << "\t\t" <<
	std::numeric_limits<unsigned int>::max() << "\t" <<
	std::numeric_limits<unsigned int>::epsilon() << "\n" <<
	"long int\t\t" << 
	std::numeric_limits<long int>::min() << "\t" <<
	std::numeric_limits<long int>::max() << "\t" <<
	std::numeric_limits<long int>::epsilon() << "\n" <<
	"unsigned long int\t" << 
	std::numeric_limits<unsigned long int>::min() << "\t\t" <<
	std::numeric_limits<unsigned long int>::max() << "\t" <<
	std::numeric_limits<unsigned long int>::epsilon() << "\n" <<
	"float\t\t\t" << 
	std::numeric_limits<float>::min() << "\t" <<
	std::numeric_limits<float>::max() << "\t" <<
	std::numeric_limits<float>::epsilon() << "\n" <<
	"double\t\t\t" << 
	std::numeric_limits<double>::min() << "\t" <<
	std::numeric_limits<double>::max() << "\t" <<
	std::numeric_limits<double>::epsilon() << "\n" <<
	"long double\t\t" << 
	std::numeric_limits<long double>::min() << "\t" <<
	std::numeric_limits<long double>::max() << "\t" <<
	std::numeric_limits<long double>::epsilon() << "\n" <<
	std::endl;
    return 0;
}