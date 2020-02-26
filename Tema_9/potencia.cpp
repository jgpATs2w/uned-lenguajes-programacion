// potencia.cpp
#include <iostream>

double potencia (double x, int n)
{
	if (n == 0) {
		return 1;
	} else {
		return x*potencia(x, n-1);
	}
}

int main()
{
   double result;
   result = potencia(5.0, 3);
   std::cout << "potencia (5.0, 3) = " << result  << std::endl;
   return 0;
}


