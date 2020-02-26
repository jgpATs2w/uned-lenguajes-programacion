// Fichero: division_main.cpp
#include <iostream>
#include <stdexcept>
#include "division.h"

int main()
{
   for (int den=2; den>=0; den--) 
      try {
		  std::cout << "10/" << den << " = " 
			  << division(10,den) << std::endl;
      }
      catch ( std::invalid_argument exc ) {
		  std::cout << exc.what() << std::endl;
      }
   return 0;
}


