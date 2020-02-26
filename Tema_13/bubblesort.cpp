//File: bubblesort.cpp

#include <iostream>
#include <vector>
#include <stdexcept>

void bubblesort ( std::vector<double> &a);

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
    bubblesort(vec);
    for (unsigned i = 0; i<vec.size(); i++)
      std::cout<<vec[i]<<std::endl;
    return 0;
}

void bubblesort ( std::vector<double> &a){
    for (unsigned i = 0; i<a.size(); i++)
      for (unsigned j = a.size()-1; j>i; j--)
         if (a[j]<a[j-1]) {
             double temp = a[j];
             a[j] = a[j-1];
             a[j-1] = temp;
         }
}
