// Fichero: manipuladores1.cpp
#include <iostream>
#include <iomanip>

int main()
{	// Formato general, 6 digitos de precisión
	std::cout << 
		"POR DEFECTO (Formato general, precision 6 digitos)\n" << 
		"Programa\t\tConsola\n" << 
		"--------\t\t-------\n" <<  
		"1234.56789\t\t"      << 1234.56789      << "\n" <<
		"9876.54321\t\t"      << 9876.54321      << "\n" <<
	    "0.123456789\t\t"     << 0.123456789     << "\n" <<
		"0.0000123456789\t\t" << 0.0000123456789 << "\n" <<
		"123.456789e+4\t\t"   << 123.456789e+4   << "\n" <<
		"123.456789e-6\t\t"   << 123.456789e-6   << "\n" <<
		"123.456789e-9\t\t"   << 123.456789e-9   << "\n" << 
		std::endl;
	// Formato general, 8 dígitos de precisión
	std::cout << 
		"FORMATO POR DEFECTO (Formato general)\n" << 
		"8 DIGITOS DE PRECISION  -  std::setprecision(8)\n" <<
		"Programa\t\tConsola\n" << 
		"--------\t\t-------\n" << std::setprecision(8) <<
		"1234.56789\t\t"      << 1234.56789      << "\n" <<
		"9876.54321\t\t"      << 9876.54321      << "\n" <<
	    "0.123456789\t\t"     << 0.123456789     << "\n" <<
		"0.0000123456789\t\t" << 0.0000123456789 << "\n" <<
		"123.456789e+4\t\t"   << 123.456789e+4   << "\n" <<
		"123.456789e-6\t\t"   << 123.456789e-6   << "\n" <<
		"123.456789e-9\t\t"   << 123.456789e-9   << "\n" << 
		std::endl;
	// Formato cientifico, 4 digitos de precision
	std::cout << std::scientific << std::setprecision(4) <<  
		"FORMATO CIENTIFICO   -  std::scientific\n" << 
		"4 DIGITOS DECIMALES  -  std::setprecision(4)\n" <<
		"Programa\t\tConsola\n" << 
		"--------\t\t-------\n" <<
		"1234.56789\t\t"      << 1234.56789      << "\n" <<
		"9876.54321\t\t"      << 9876.54321      << "\n" <<
	    "0.123456789\t\t"     << 0.123456789     << "\n" <<
		"0.0000123456789\t\t" << 0.0000123456789 << "\n" <<
		"123.456789e+4\t\t"   << 123.456789e+4   << "\n" <<
		"123.456789e-6\t\t"   << 123.456789e-6   << "\n" <<
		"123.456789e-9\t\t"   << 123.456789e-9   << "\n" << 
		std::endl;
	// Formato fijo, 6 digitos de precisión
	std::cout << std::fixed << std::setprecision(6) <<
		"FORMATO FIJO        -  std::fixed\n" <<
		"6 DIGITOS DECIMALES -  std::setprecision(6)\n" << 
		"Programa\t\tConsola\n" << 
		"--------\t\t-------\n" <<
		"1234.56789\t\t"      << 1234.56789      << "\n" <<
		"9876.54321\t\t"      << 9876.54321      << "\n" <<
	    "0.123456789\t\t"     << 0.123456789     << "\n" <<
		"0.0000123456789\t\t" << 0.0000123456789 << "\n" <<
		"123.456789e+4\t\t"   << 123.456789e+4   << "\n" <<
		"123.456789e-6\t\t"   << 123.456789e-6   << "\n" <<
		"123.456789e-9\t\t"   << 123.456789e-9   << "\n" << 
		std::endl;
	return 0;
}
