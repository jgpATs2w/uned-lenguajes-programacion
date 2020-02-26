//Fichero: ordenaArray.cpp

#include <iostream>

int ordena (const double a[], int size);

int main()
{
    int sizeMax = 1000;
    double array[sizeMax];
    std::cout << "Introduzca los valores: ";
    double x;
    int i = 0;
    while (std::cin >> x){
      array[i] = x;
      i++;}
    if (std::cin.fail() && !std::cin.eof()) {
      std::cerr << "Valores no validos" << std::endl;
      return -1;}
    if (i>sizeMax) {
      std::cerr << "Ha rebasado el tamaño max. del array" << std::endl;
      return -1;}
    std::cout << "Resultado usando un array "
              << ordena(array, i) << std::endl;
    return 0;
}

int ordena (const double a[], int size){
    for (int i = 0; i<size-1; i++)
        if (a[i]>a[i+1]) return i+1;
    return -1;
}
