// en_orden.cpp

#include <iostream>

bool enOrden (int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    std::cout << "Inserte el valor del primer numero" << std::endl;
    std::cin >> n1;
    std::cout << "Inserte el valor del segundo numero" << std::endl;
    std::cin >> n2;
    std::cout << "Inserte el valor del tercer numero" << std::endl;
    std::cin >> n3;
    std::cout << "El resultado de la evaluacion de la funcion es " <<  std::boolalpha << enOrden(n1, n2, n3)  << std::endl;
    return 0;
}

bool enOrden (int n1, int n2, int n3){
    return ((n1<=n2)&&(n2<=n3));
}
