// Fichero: funcFactorial1.cpp
#include <iostream>
#include <sstream>
#include <string>


const int ARG_MAX = 10;
enum codigoError { MENOR_QUE_UNO = -1, MAYOR_QUE_ARG_MAX = -2 };
const std::string CABECERA_MSG_ERROR = " *** ERROR *** ";

int fact( int i ) {
// Algoritmo para cálculo recursivo del factorial
    if ( i==1 ) return 1;
    return i*fact(i-1);
}

int fact_1a10( int i ) {
/*
 * Si el argumento está en [1,ARG_MAX], devuelve el factorial
 * Si i < 1, devuelve código de error MENOR_QUE_UNO
 * Si i > ARG_MAX, devuelve código de error MAYOR_QUE_ARG_MAX
 */
	// Comprueba si el argumento es válido
	if ( i<1 )  
		return MENOR_QUE_UNO;  
	if ( i>ARG_MAX ) 
		return MAYOR_QUE_ARG_MAX;  
	// Calcula el factorial de i
	return fact(i);
}

int main()
{	
	bool errorRango;
	do {
	   std::cout << "Introduzca un numero entero positivo entre 1 y 10: ";
	   int  num;
	   std::cin >> num;
	   int factorial = fact_1a10(num);
	   std::stringstream msg;
	   if ( factorial == MENOR_QUE_UNO ) {
		   msg << CABECERA_MSG_ERROR <<
			   "Numero no valido: " << num << " es menor que 1";
		   errorRango = true;
	   } else if ( factorial == MAYOR_QUE_ARG_MAX ) {
		   msg << CABECERA_MSG_ERROR << "Numero no valido: " <<  
			   num << " es mayor que " << ARG_MAX;
		   errorRango = true;
	   } else {
		   msg << "El factorial de " << num << 
		  " es " << factorial;
		   errorRango = false;
	   }
	   std::cout << msg.str() << std::endl;
	} while (errorRango);   
    return 0;
}
