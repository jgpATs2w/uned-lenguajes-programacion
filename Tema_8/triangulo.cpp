//triangulo.cpp
#include <iostream>

int main()
{
 double a,b,c;
 std::cout<<"Inserta la longitud de los 3 lados del triangulo"<<std::endl;
 std::cin>>a>>b>>c;

 if(a==b && b==c && c==a)
     std::cout<<"El triangulo es equilatero"<<std::endl;
 else if (a==b || b==c || c==a)
     std::cout<<"El triangulo es isosceles"<<std::endl;
 else
     std::cout<<"El triangulo es escaleno"<<std::endl;
 return 0;
}


