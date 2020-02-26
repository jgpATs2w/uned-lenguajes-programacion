// Fichero: operString.cpp
#include <iostream>
#include <string>

int main()
{
	// Declaraciones, en algunos casos con inicialización
	std::string s1 = "uno";
	std::string s2 = "dos\n";
	std::string salto = "\n";
	std::string s3 = s1 + "(copia s3)" + salto; 
	std::string s4, s5;

	s4 = s1;             // Asignación de un string
	s4 += "(copia s4)";  // Concatenación y asignación

	std::cout << "Introduzca s5: ";
	std::cin  >> s5;     // Entrada por teclado

	// Escritura en consola, ilustrando concatenación
	std::cout << "s1: " + s1 + salto + 
		"s2: " + s2 + 
		"s3: " + s3 + 
		"s4: " + s4 + salto +
		"s5: " + s5 << std::endl;

	// Comparaciones mayor que, menor que, igual que, diferente de
	std::cout << "s1 mayor que s2?: "  << (s1>s2)  << salto;
	std::cout << "s1 menor que s3?: "  << (s1<s3)  << salto;
	std::cout << "s1 igual que s4?: "  << (s1==s4) << salto;
	std::cout << "s1 no igual a s4?: " << (s1!=s4) << salto;

	// Comparaciones de igualdad con resultado true
	std::string s1a = "uno", s1b;
	s1b = s1;
	std::cout << "s1 igual que s1a?: " << (s1==s1a)  << salto;
	std::cout << "s1 igual que s1b?: " << (s1==s1b)  << salto;
	std::cout << "s1 igual que \"uno\"?: " << (s1=="uno")  << salto;

	// Acceso especificando subíndice
	std::cout << "s1 deletreado: " << 
		s1[0] << ", " << s1[1] << ", " << s1[2] << std::endl;
	// Comparaciones de igualdad especificando subíndice
	std::cout << "Segundo caracter de s1 es \'n\'?: " << (s1[1]=='n')  << salto;
	std::cout << "Segundo caracter de s1 es \'o\'?: " << (s1[1]=='o')  << salto;

	return 0;
}

