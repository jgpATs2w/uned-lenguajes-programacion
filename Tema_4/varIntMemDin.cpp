// Fichero: varIntMemDin.cpp
#include <iostream>

int main()
{
   int *p;      
   p = new int;  
   *p = 3;       
   std::cout << "En la posicion de memoria " << p
	   << " esta almacenado el valor " << *p << std::endl;
   return 0;
}


