// Fichero: funcMiembroString1.cpp
#include <iostream>
#include <string>

int main()
{
	std::string s1 = "ABCDE_FGHIJ_KLMNO_PQRST_UVWYZ";
	std::string s2 = "123456789";

	std::cout << "Strings iniciales\n" <<
		"s1: " + s1 + "\ns2: " + s2 << std::endl;

	std::cout << "s1 tiene " << s1.size() << " caracteres,\t" <<
		"s1[0] = " << s1[0] << 
		", s1[" << s1.size()-1 << "] = " << s1[s1.size()-1] << std::endl;

	std::cout << "s2 tiene " << s2.size() << " caracteres,\t" <<
		"s2[0] = " << s2[0] << 
		", s2[" << s2.size()-1 << "] = " << s2[s2.size()-1] << std::endl;


	// Asignar
	// Se asignan a s3 5 caracteres de s1, comenzando por s1[6]
	std::string s3;
	s3.assign(s1,6,5);
	std::cout << "\nSe define s3 a partir de s1\n";
	std::cout << "s3: " << s3 << std::endl;

	// Insertar
	// s3 se inserta en s2, comenzando en s2[3]
	std::cout << "\nInsertar s3 en s2\n";
	s2.insert(3,s3);  // 
	std::cout << "s2: " << s2 << std::endl;

	// Borrar
	// Se borran de s2 s3.size() caracteres, comenzando por s2[3]
	std::cout << "\nBorrar de s2 los caracteres insertados\n";
	s2.erase(3,s3.size());
	std::cout << "s2: " << s2 << std::endl;

	// Reemplazar
	// 5 caracteres de s1, comenzando por s1[12], son reemplazados por s2
	std::cout << "\nReemplaza 5 caracteres en s1 por todo s2\n";
	s1.replace(12,5,s2);
	std::cout << "s1: " << s1 << std::endl;

	return 0;
}

