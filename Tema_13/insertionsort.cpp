//File: insertionsort.cpp

#include <iostream>
#include <vector>
#include <stdexcept>

void insertionsort ( std::vector<double> &a);

int main()
{
    std::vector<double> vec;
    std::cout << "Introduzca los valores: ";
    double x;
    while (std::cin >> x)
      vec.push_back(x);
    if (std::cin.fail() && !std::cin.eof()) {
      std::cerr << "Valores no validos" << std::endl;
      return -1;
    }
    insertionsort(vec);
    for (unsigned i = 0; i<vec.size(); i++)
      std::cout<<vec[i]<<std::endl;
    return 0;
}

void insertionsort ( std::vector<double> &a){
    double key;
    for (unsigned j = 1; j<a.size(); j++){
      key = a[j];
      unsigned i = j-1;
      while ( i >= 0 && a[i]>key){
        a[i+1] = a[i];
        i = i-1;
      }
      a[i+1] = key;
    }
}

