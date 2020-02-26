// Fichero: determinante.cpp
#include<iostream>
#include<cmath>

// Tamaño máximo de las matrices a calcular
const int SM = 10;

// Prototipos de las funciones
double determinante(double[SM][SM],int);
void leeMatriz(double[SM][SM],int);
void escribeMatriz(double[SM][SM],int);

int main()
{
	double a[SM][SM];  // Array que almacena la matriz
	// Entrada del tamaño la matriz
	int n;
	std::cout << "CALCULO DEL DETERMINANTE DE UNA MATRIZ-\n" 
			"Introduce las dimension de la matriz (cuadrada):";
	std::cin >> n;
	// Entrada de los componentes de la matriz
	leeMatriz(a,n);
	// Cálculo del determinante
	double resultado = determinante(a,n);
	// Escritura de la matriz en la consola
	escribeMatriz(a,n);
	// Escritura del valor del determinante
	std::cout << "\n\nEl valor del determinante es: " << 
		resultado << std::endl;
	return 0;
}


void leeMatriz(double b[SM][SM], int m) {	
	std::cout << "Introduzca los componentes [fila][columna]:";
	for(int i=0; i<m; i++)  
		for(int j=0; j<m; j++) {
			std::cout << "\n[" << i+1 << "]" << "[" << j+1 << "]:";
			std::cin >> b[i][j];
		}
	return;
}


void escribeMatriz(double b[SM][SM], int m) {
	std::cout <<"La matriz es:";
	for(int i=0; i<m; i++) {
		std::cout << std::endl;
		for(int j=0;j<m;j++)
			std::cout << "\t" << b[i][j];
	}
	std::cout << std::endl;
	return;
}


double determinante(double b[SM][SM], int m) {
	// Cálculo del determinante de 2x2
	if( m==2 )                                         
		return b[0][0]*b[1][1] - b[0][1]*b[1][0];
	// Cálculo del determinante mxm, con m>2
	double sum = 0;
	double c[SM][SM];
	for(int p=0; p<m; p++) {
		int h = 0, k = 0;
		for(int i=1; i<m; i++) {
			for( int j=0; j<m; j++) {
				if(j==p) continue;
				c[h][k] = b[i][j];
				k++;
				if(k == m-1) {
					h++;
					k = 0;
				}
			}
		}
		sum += b[0][p]*pow(-1.0,int(p))*determinante(c,m-1);
	}
	return sum;
}
