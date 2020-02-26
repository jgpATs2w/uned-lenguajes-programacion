//Fichero: areaTriangulo.cpp

#include <iostream>
#include <cmath>

void triangulo (double l1, double l2, double l3, double *area, double *per);
void triangulo (double l1, double l2, double l3, double &area, double &per);

int main()
{
    double lado1, lado2, lado3, area, perimetro, area1, perimetro1;
    std::cout << "Inserte el valor del primer lado" << std::endl;
    std::cin >> lado1;
    std::cout << "Inserte el valor del segundo lado" << std::endl;
    std::cin >> lado2;
    std::cout << "Inserte el valor del tercer lado" << std::endl;
    std::cin >> lado3;
    triangulo(lado1, lado2, lado3, &area, &perimetro);
    triangulo(lado1, lado2, lado3, area1, perimetro1);
    std::cout << "El valor del perimetro es " <<  perimetro  << std::endl;
    std::cout << "El valor del area es " << area1  << std::endl;
    return 0;
}

void triangulo (double a, double b, double c, double *area, double *per){
    double s = (a + b + c)/2;
    *area = sqrt(s*(s-a)*(s-b)*(s-c));
    *per = 2*s;
}

void triangulo (double a, double b, double c, double &area, double &per){
    double s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    per = 2*s;
}
