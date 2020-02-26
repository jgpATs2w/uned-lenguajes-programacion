// Fichero: arrayMemDin.cpp
#include <iostream>

int main()
{
	double *v; 
	int numComponentes = 3;
	v = new double [2*numComponentes];

	// Acceso especificando el índice
	v[0] = 1.5; v[1] = 2.5; v[2] = 3.2;
	v[3] = 5.6; v[4] = 7.9; v[5] = 11.3;
	std::cout << "v = ("  
		<< v[0] << ", " << v[1] << ", " << v[2] << ", "
		<< v[3] << ", " << v[4] << ", " << v[5] << ")"
		<< std::endl;

	// Acceso mediante aritmética de punteros
	*v     = 0;   *(v+1) = 0.1; *(v+2) = 0.2;
	*(v+3) = 0.3; *(v+4) = 0.4; *(v+5) = 0.5;
	std::cout << "v = ("  
		<< *v     << ", " << *(v+1) << ", " << *(v+2) << ", "
		<< *(v+3) << ", " << *(v+4) << ", " << *(v+5) << ")"
		<< std::endl;

	delete [] v;
	return 0;
}


