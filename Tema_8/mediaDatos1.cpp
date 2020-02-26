// Fichero: mediaDatos1.cpp
#include <iostream>
#include <limits>

const bool MODO_DEBUG = true;

int main()
{	
    char continuar;
	do {
	   if ( MODO_DEBUG )
	      std::cout << "Antes del bucle while:"
           << "\n    cin.eof(): " << std::cin.eof()
           << "\n   cin.fail(): " << std::cin.fail()
           << "\n    cin.bad(): " << std::cin.bad()
           << "\n   cin.good(): " << std::cin.good() 
		   << std::endl;
       std::cout << "Por favor, introduzca los datos: ";
       double dato      = 0, sumaDatos = 0;   
       int    numDatos  = 0; 
       while (std::cin >> dato) {
		  sumaDatos += dato;
		  numDatos++;
	   }
	   if ( MODO_DEBUG )
          std::cout << "Tras finalizar bucle while:"
           << "\n    cin.eof(): " << std::cin.eof()
           << "\n   cin.fail(): " << std::cin.fail()
           << "\n    cin.bad(): " << std::cin.bad()
           << "\n   cin.good(): " << std::cin.good() << std::endl;
	   if (std::cin.eof()) {
	      std::cout << "El valor medio es: " << 
		     sumaDatos/numDatos << std::endl;
          std::cin.clear();
	   }
       if (std::cin.fail() && !std::cin.eof()) {
		  std::cout << "ERROR: Datos no validos" << std::endl;
	      std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
       }
   	   if ( MODO_DEBUG )
	      std::cout << "Tras clear:"
           << "\n    cin.eof(): " << std::cin.eof()
           << "\n   cin.fail(): " << std::cin.fail()
           << "\n    cin.bad(): " << std::cin.bad()
           << "\n   cin.good(): " << std::cin.good() << std::endl;
	   do {
	       std::cout << "\nDesea hacer otro calculo? (s/n): ";
	       std::cin >> continuar;
		   std::cin.clear();
           std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	   } while (continuar!='s' && continuar!='S' && 
		        continuar!='n' && continuar!='N');
	} while (continuar=='s' || continuar=='S');
	return 0;
}
