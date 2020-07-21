// Fichero: puntFunc.cpp
#include<iostream>
#include<sstream>
#include<string>

std::string invierte(std::string p) {
	std::stringstream ss;
	for (int i=p.size()-1;i>=0;i--)
		ss << p[i];
	return ss.str();
}

int main() {
	std::string palabra;
	std::cout << "Introduzca una palabra: ";
	std::cin >> palabra;
	// Invocaci�n a la funci�n
	std::string palabraInv1 = invierte(palabra);
	std::cout << "Al reves (1): " << palabraInv1 << std::endl;
	// Declaraci�n de un o llamado pf cuyo tipo base
	// es una funci�n que tiene un argumento std::string y
	// un tipo de retorno std::string
	std::string (*pf)(std::string);
	// Se hace apuntar pf a la funci�n invierte 
	pf = invierte;
	// Invocaci�n a la funci�n invierte mediante el o
	std::string palabraInv2 = (*pf)(palabra);
	std::cout << "Al reves (2): " << palabraInv2 << std::endl;
	return 0;
}
