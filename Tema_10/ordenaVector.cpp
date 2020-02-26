//Fichero: ordenaVector.cpp

#include <iostream>
#include <vector>
#include <stdexcept>

int ordena (const std::vector<double> &a);

int main()
{
    std::vector<double> vec;
    double resultado;
    std::cout << "Introduzca los valores: ";
    double x;
    while (std::cin >> x)
      vec.push_back(x);
    if (std::cin.fail() && !std::cin.eof()) {
      std::cerr << "Valores no validos" << std::endl;
      return -1;
    }
    try {
      resultado = ordena(vec);
     } catch (std::domain_error exc) {
      std::cerr << "No ha introducido ningun valor" << std::endl;
      return -1;
    }
    std::cout << "Resultado usando un vector "
    <<  resultado  << std::endl;
    return 0;
}

int ordena (const std::vector<double> &a){
    if (!a.size())
      throw std::domain_error("Vector con cero componentes");
    for (unsigned i = 0; i<a.size()-1; i++)
      if (a[i]>a[i+1]) return i+1;
    return -1;
}
