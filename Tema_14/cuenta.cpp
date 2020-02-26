//Fichero: cuenta.cpp
#include<vector>
#include <algorithm>
#include <iostream>

bool isEven (int elem)
{
 return elem % 2 == 0;
}

bool isGreater4 (int elem)
{
 return elem > 4;
}

int main()
{
   std::vector<int> coll;
   int num;

   for (int i=1; i<=9; i++)
   coll.push_back(i);

   num = std::count (coll.begin(), coll.end(), 4);
   std::cout << "Número de elementos iguales a 4: "
             << num << std::endl;

   num = std::count_if (coll.begin(), coll.end(), isEven);
   std::cout << "Número de elementos de valor par: "
        << num << std::endl;

   num = std::count_if (coll.begin(), coll.end(), isGreater4);
   std::cout << "Número de elementos cuyo valor es mayor que 4: "
             << num << std::endl;

}
