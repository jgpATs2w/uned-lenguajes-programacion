#include <iostream>
#include <iomanip>
int main() {
    double i = 112.2379;
    double a[4] = {22.123, 61.551, 3.2343, 390.2323};
    double *p;
    p = &i;
    std::cout << std::scientific << std::setprecision(3)
              << *p << std::endl;
    std::cout << i << std::endl;
    *p = 137.98;
    std::cout << std::scientific << std::setprecision(4)
              << *p << std::endl;
    std::cout << i << std::endl;
    p = a;
    p++;
    *p = 29.242;
    p++;
    std::cout << *p
              << std::endl;
    std::cout << i
              << std::endl;
    std::cout << a[1] << std::endl;
    return 0;
}