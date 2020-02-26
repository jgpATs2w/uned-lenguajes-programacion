// Fichero: pasoRef2.cpp
#include <iostream>

void intercambia(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;
	return;
}

int main()
{
	int i1 = 1, i2 = 2;
	std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
	intercambia(i1, i2);
	std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
	return 0;
}


