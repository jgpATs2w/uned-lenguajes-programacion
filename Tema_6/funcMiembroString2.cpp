// Fichero: funcMiembroString2.cpp
#include <iostream>
#include <string>

int main()
{
	std::string s1 = "ABCDE_1234_FGHIJ_1234_KLMNO_1234_PQRST_1234_UVWYZ";
	std::string s2 = "23";

	std::cout << "Strings iniciales\n" <<
		"s1: " + s1 + "\ns2: " + s2 + "\n" << std::endl;

	// Variables auxiliares, para mostrar s1 dividido
	std::string s1_antes, s1_despues;

	// find
	int i = s1.find(s2); // Comienza búsqueda en s1[0]
	std::cout << "s1.find(s2)\tIndice:\t" << i << std::endl;
	s1_antes.assign(s1, 0, i);
	s1_despues.assign(s1, i, s1.size());
	std::cout << "\t" << s1_antes << "<*>" << s1_despues << std::endl;

	i = s1.find(s2,12);  // Comienza búsqueda en s1[12]
	std::cout << "\ns1.find(s2,12)\tIndice:\t" << i << std::endl;
	s1_antes.assign(s1, 0, i);
	s1_despues.assign(s1, i, s1.size());
	std::cout << "\t" << s1_antes << "<*>" << s1_despues << std::endl;

	// rfind
	i = s1.rfind(s2); // Comienza búsqueda por el final de s1
	std::cout << "\ns1.rfind(s2)\tIndice:\t" << i << std::endl;
	s1_antes.assign(s1, 0, i);
	s1_despues.assign(s1, i, s1.size());
	std::cout << "\t" << s1_antes << "<*>" << s1_despues << std::endl;

	i = s1.rfind(s2,12);  // Comienza búsqueda en s1[12]
	std::cout << "\ns1.rfind(s2,12)\tIndice:\t" << i << std::endl;
	s1_antes.assign(s1, 0, i);
	s1_despues.assign(s1, i, s1.size());
	std::cout << "\t" << s1_antes << "<*>" << s1_despues << std::endl;


	return 0;
}

