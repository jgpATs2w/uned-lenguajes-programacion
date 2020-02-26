// Fichero: primos.cpp
#include<iostream>

// Número de primos a calcular
const int N=1000;
// Array donde se almacenan los N números primos calculados
int primos[N];

int main() 
{
	primos[0] = 2;   // Primer número primo
	int nPrimos = 1; // Primos calculados hasta el momento
	// Bucle para buscar los números primos
	int numExaminar = primos[0];
	while (nPrimos<N) {
		numExaminar++;
		bool noDivisible = true;
		for (int iPrimo=0; iPrimo<nPrimos && noDivisible; iPrimo++)
			noDivisible = numExaminar%primos[iPrimo];
		if (noDivisible) {
			primos[nPrimos] = numExaminar;
			nPrimos++;
		}
	}
	// Muestra los números primos en pantalla
	for (int i=0; i<N; i++)
		std::cout << primos[i] << std::endl;
	return 0;
}
