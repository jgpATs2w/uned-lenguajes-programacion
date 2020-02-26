// Fichero: tablasVerdad1.cpp
#include <iostream>

int main()
{
	std::cout << "Tabla de la verdad NOT\na\t!a\n" <<
		false << "\t" << !false << "\n" <<
		true  << "\t" << !true  << "\n" << std::endl;

	std::cout << "Tabla de la verdad AND\na\tb\ta && b\n" <<
		false << "\t" << false << "\t" << (false && false) << "\n" <<
		false << "\t" << true  << "\t" << (false && true ) << "\n" <<
		true  << "\t" << false << "\t" << (true  && false) << "\n" <<
		true  << "\t" << true  << "\t" << (true  && true ) << "\n" << std::endl;

	std::cout << "Tabla de la verdad OR\na\tb\ta || b\n" <<
		false << "\t" << false << "\t" << (false || false) << "\n" <<
		false << "\t" << true  << "\t" << (false || true ) << "\n" <<
		true  << "\t" << false << "\t" << (true  || false) << "\n" <<
		true  << "\t" << true  << "\t" << (true  || true ) << std::endl;

	return 0;
}

