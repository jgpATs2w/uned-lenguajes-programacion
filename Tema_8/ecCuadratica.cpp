//ecCuadratica.cpp

#include <iostream>
#include <cmath>
#include <complex>

int main()
{
  double a,b,c;

  std::cout<<"Inserta los coeficientes "<<
  "a, b y c de la ecuacion "<<
  "ax**2+bx+c"<<std::endl;
  std::cin>>a>>b>>c;

  if( (std::pow(b,2)-4*a*c)>= 0 )
    {
     std::cout<<"Tiene soluciones reales"<<std::endl;
     std::cout<<(-b+std::sqrt(b*b-4*a*c))/2/a<<std::endl;
     std::cout<<(-b-std::sqrt(b*b-4*a*c))/2/a<<std::endl;
    }
  else
    {
	 std::cout<<"Tiene soluciones complejas"<<std::endl;
	 std::complex<double> x(-b,std::sqrt(4*a*c-b*b));
	 std::complex<double> y (-b, -std::sqrt(4*a*c-b*b));
	 std::cout << "x = " << x << std::endl;
	 std::cout << "Módulo de x = " << abs(x) << std::endl;
	 std::cout << "Argumento de x = " << arg(x) << std::endl;
	 std::cout << "y = " << y << std::endl;
	 std::cout << "Módulo de y = " << abs(y) << std::endl;
	 std::cout << "Argumento de y = " << arg(y) << std::endl;
    }

  return 0;
}

