// Fichero: flujoString.cpp
#include <iostream>
#include <sstream>

int main()
{	
	int i = 10;
	double x = 3.3;
	bool b = true;
	// Declaración del flujo
	std::stringstream ss;
	// Los valores se ponen en el flujo usando el operador <<
	ss << "La variable \'i\' vale " << i << ", " <<
		"la variable \'x\' vale " << x << 
		" y la variable \'b\' vale " << 
		std::boolalpha << b << ".";
	// Conversión del flujo a string
	std::string s = ss.str();
	// Uso de la variable de tipo string
	std::cout << s << std::endl;
    return 0;
}
