// Fichero: excepFun1.cpp
#include <iostream>
#include <stdexcept>
#include <sstream>

int division (int i1, int i2) 
   throw (std::invalid_argument)
{
	if (!i2) {
		std::stringstream ss;
		ss << i1 << "/" << i2 << " Error: Division por cero!";
	    throw std::invalid_argument (ss.str());
	}
   return i1/i2;
}

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
