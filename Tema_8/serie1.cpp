// serie1.cpp
#include <iostream>
#include <cmath>

int main()
{
 int n = 0;
 int select = 0;
 double suma = 0;

 std::cout<<"Seleccione 1, 2 o 3 si desea sumar "<<
 "los términos de la serie geométrica de constante 1/2, "<<
 "armónica o la versión alterna de la serie armónica "<<
 "respectivamente"<<std::endl;
 std::cin>>select;
 if (select>3||select<1)
     {std::cout<<"No ha introducido un número de 1-3"<<std::endl;
      return 1;
     }

 std::cout<<"Inserta el numero de terminos a sumar"<<std::endl;
 std::cin>>n;
 if (n<=0)  std::cout<<"Debe introducir un número mayor que cero"<<std::endl;

 switch(select){
  case 1:
   for (int i = 0; i<n; i++)
     suma = suma + 1.0/std::pow(2.0,i);
   break;
  case 2:
   for (int i = 1; i<=n; i++)
     suma = suma + 1.0/i;
   break;
  case 3:
   for (int i = 1; i<=n; i++)
     suma = suma + std::pow(-1.0,i+1)/i;
   break;
  default:
   "No ha introducido 1-3";
 }
 std::cout<<suma<<std::endl;
 return 0;
}

