//Fichero: algCopiayReemplaza1.cpp

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  char str[] = "Hola mundo!";
  std::vector<char> vector1, vector2;

  for(int i = 0; str[i]; i++)
     vector1.push_back(str[i]);

  for(int i = 0; str[i]; i++)
     vector2.push_back('a');

  for(int i = 0; i <vector1.size(); i++)
     std::cout << vector1[i];
  std::cout << std::endl;

  remove_copy(vector1.begin(), vector1.end(), vector2.begin(), ' ');

  for(int i = 0; i <vector2.size(); i++)
     std::cout << vector2[i];
  std::cout << std::endl;

  for(int i = 0; i <vector1.size(); i++)
     std::cout << vector1[i];
  std::cout << std::endl;

  replace_copy(vector1.begin(), vector1.end(), vector2.begin(), ' ', ':');

  for(int i = 0; i <vector2.size(); i++)
     std::cout << vector2[i];
  std::cout << std::endl;

  return 0;
}


