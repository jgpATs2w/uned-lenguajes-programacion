// ackerman.cpp
#include <iostream>

int Ackermann (int n, int m);

int main()
{
   int result;
   result = Ackermann(1,2);
   std::cout << "Ackermann(1, 2) = " << result  << std::endl;
   return 0;
}

int Ackermann(int n, int m){
   if (n == 0) return m+1;
   else if (m == 0) return Ackermann(n-1, 1);
   else return Ackermann(n-1,Ackermann(n,m-1));
}
