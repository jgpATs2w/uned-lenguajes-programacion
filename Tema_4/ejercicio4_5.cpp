//ejercicio4_5.cpp

#include <iostream>

int main () {
   int* p;
   int a[2];
   a[0] = 0;
   a[1] = 1;
   p = a;
   std::cout << p[0] <<std::endl;
   std::cout << p[1] <<std::endl;
   p[0] = p[0]+1;
   std::cout<<a[0]<<std::endl;
   return 0;
 }
