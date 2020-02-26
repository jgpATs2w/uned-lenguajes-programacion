// Fichero: iniVarsTiposBasicos.cpp
#include <iostream>

int    i_global, n_global[3];
double x_global;
bool   b_global;
char   c_global;

int main()
{	
	// Escritura en la consola de las variables globales
	std::cout << 
		"i_global = " << i_global << ", " <<
		"x_global = " << x_global << ", " <<
		"b_global = " << b_global << ", " <<
		"c_global = \'" << c_global << "\'\n" <<
		"n_global = (" << n_global[0] << "," <<
		n_global[1] << "," << n_global[2] << 
		")" << std::endl;

	// Declaración sin inicialización de variables locales
	int    i_local, n_local[3];
	double x_local;
	bool   b_local;
	char   c_local;
	// ----------------------------------------------------------
	// ERROR!!
	// Uso de variables locales a las que no se ha asignado valor
	std::cout << 
		"i_local = "   << i_local << ", "   <<
		"x_local = "   << x_local << ", "   <<
		"b_local = "   << b_local << ", "   <<
		"c_local = \'" << c_local << "\'\n" <<
		"n_local = ("  << n_local[0] << "," <<
		n_local[1] << "," << n_local[2]     << 
		")" << std::endl;
	// ----------------------------------------------------------
	return 0;
}
