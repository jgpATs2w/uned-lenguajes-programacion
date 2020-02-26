//ejercicio4_3.cpp

#include <iostream>

int x1, x2, x3;

int main () {
   x1 = 1;
   {  //Inicio bloque1
     std::cout << x1 <<std::endl;
     int x1 = 4;
     std::cout << x1 <<std::endl;
    { //Inicio bloque2
	    x2 = x1;
	    std::cout << x2 <<std::endl;
	    std::cout << ::x1 <<std::endl;
    }//Fin bloque2
   }  //Fin bloque1
   std::cout << x1 <<std::endl;
   return 0;
 }
