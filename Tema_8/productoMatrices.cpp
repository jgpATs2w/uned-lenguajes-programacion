// Fichero: productoMatrices.cpp
#include<iostream>

// Número máximo de filas o columnas
const int SM = 10;

int main()
{
	// Arrays que almacenan las matrices operandos
	double A[SM][SM], B[SM][SM];
	// Tamaño de A y B
	int numFilasA, numColumnasA, numFilasB, numColumnasB;
	std::cout << "Num. filas o columnas maximo: " << SM <<
	             "\nNum. filas de A: ";
	std::cin >> numFilasA;
	std::cout << "\nNum. columnas de A (igual al num. filas de B): ";
	std::cin >> numColumnasA;
	numFilasB = numColumnasA;
	std::cout << "\nNum. columnas de B: ";
	std::cin >> numColumnasB;
	if (numFilasA>SM || numColumnasA>SM || numColumnasB>SM) {
		std::cout << "\nExcedido num. maximo de filas o columnas" << std::endl;
		return 0;
	}
	// Entrada de A
	std::cout << "\nIntroduzca los terminos de la matriz A[fila][columna]";
	for(int i=0; i<numFilasA; i++) {
		for(int j=0; j<numColumnasA; j++) {
			std::cout << "\nA[" << i+1 << "]" << "[" << j+1 << "]:";
			std::cin >> A[i][j];
		}
	}
	// Entrada de B
	std::cout << "\nIntroduzca los terminos de la matriz B[fila][columna]";
	for(int i=0; i<numFilasB; i++) {
		for(int j=0; j<numColumnasB; j++) {
			std::cout << "\nB[" << i+1 << "]" << "[" << j+1 << "]:";
			std::cin >> B[i][j];
		}
	}
	// Cálculo del producto C=A*B
	double C[SM][SM]; 
	// Tamaño de C
	int numFilasC = numFilasA;
	int numColumnasC = numColumnasB;
	for (int i=0; i<numFilasA; i++) {
		for (int j=0;j<numColumnasB;j++) {
			C[i][j]= 0;
			for (int k=0; k<numFilasB; k++) 
				C[i][j] += A[i][k]*B[k][j];		
		}
	}
	// Salida por consola de A, B y C
	std::cout << "Matriz A:";
	for(int i=0; i<numFilasA; i++) {
		std::cout << "\n";
		for(int j=0; j<numColumnasA; j++) 
			std::cout << "\t" << A[i][j];
	}
	std::cout<<"\nMatriz B:";
	for(int i=0; i<numFilasB; i++) {
		std::cout << "\n";
		for(int j=0;j<numColumnasB;j++) 
			std::cout << "\t" << B[i][j];
	}
	std::cout<<"\nMatriz C:";
	for(int i=0; i<numFilasC; i++) {
		std::cout << "\n";
		for(int j=0; j<numColumnasC; j++) 
			std::cout << "\t" << C[i][j];
	}
	std::cout << std::endl;
	return 0;
}

