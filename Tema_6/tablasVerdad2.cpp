// Fichero: tablasVerdad2.cpp
#include <iostream>

int main()
{
	std::cout << "Tabla de la verdad NOT\na\t!a\n" <<
		0 << "\t" << !0 << "\n" <<
		1 << "\t" << !1 << "\n" << std::endl;

	std::cout << "Tabla de la verdad AND\na\tb\ta && b\n" <<
		0 << "\t" << 0 << "\t" << (0 && 0) << "\n" <<
		0 << "\t" << 1 << "\t" << (0 && 1) << "\n" <<
		1 << "\t" << 0 << "\t" << (1 && 0) << "\n" <<
		1 << "\t" << 1 << "\t" << (1 && 1) << "\n" << std::endl;

	std::cout << "Tabla de la verdad OR\na\tb\ta || b\n" <<
		0 << "\t" << 0 << "\t" << (0 || 0) << "\n" <<
		0 << "\t" << 1 << "\t" << (0 || 1) << "\n" <<
		1 << "\t" << 0 << "\t" << (1 || 0) << "\n" <<
		1 << "\t" << 1 << "\t" << (1 || 1) << std::endl;

	return 0;
}

