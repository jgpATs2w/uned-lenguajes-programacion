// gravitacion.cpp

#include <iostream>

const double G = 6.67e-11; //Constante de la gravitacion universal en el S.I.

double fuerzaG (double m1, double m2, double d);

int main()
{
    double m1, m2, d;
    std::cout << "Inserte el valor de la primera masa" << std::endl;
    std::cin >> m1;
    std::cout << "Inserte el valor de la segunda masa" << std::endl;
    std::cin >> m2;
    std::cout << "Inserte el valor de la distancia existente entre las dos masas" << std::endl;
    std::cin >> d;
    std::cout << "El valor de la fuerza gravitacional existente es " << fuerzaG(m1, m2, d)  << " N" <<std::endl;
    return 0;
}

double fuerzaG (double m1, double m2, double d){
    return G*m1*m2/d/d;
}
