// Fichero: excepFun3.cpp
#include <iostream>
#include <stdexcept>
#include <sstream>

int division (int i1, int i2) throw (std::invalid_argument)
{
	try {
	   if (!i2) {
		  std::stringstream ss;
		  ss << i1 << "/" << i2 << " Error: Division por cero!";
	      throw std::invalid_argument (ss.str());
	   }
       return i1/i2;
	}
	catch ( std::invalid_argument exc ) {
		  std::cout << "Excepcion capturada en division" << std::endl;
		  throw; // Vuelve a lanzarse la excepción
    }
}

int divInt1 (int i1, int i2) throw (std::invalid_argument)
{
	try {
		return division(i1,i2);
	}
	catch ( std::invalid_argument exc ) {
		  std::cout << "Excepcion capturada en divInt1" << std::endl;
		  throw; // Vuelve a lanzarse la excepción
    }
}

int divInt2 (int i1, int i2) throw (std::invalid_argument)
{
    return divInt1(i1,i2);
}

int main()
{
   for (int den=2; den>=0; den--) 
      try {
		  std::cout << "10/" << den << " = " 
			  << divInt2(10,den) << std::endl;
      }
      catch ( std::invalid_argument exc ) {
		  std::cout << exc.what() << std::endl;
      }
   return 0;
}
