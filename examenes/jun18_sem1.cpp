#include <iostream>
#include <iomanip>
double x, y;
int main () {
    x = 7.06178;
    y = 5.62456;
    double *p;
    double a[2] = { 2.123, 6.551 };
    {
        double x = y;
        std::cout << std::scientific << std::setprecision(3)
                  << x << std::endl;
        std::cout << ::x <<std::endl;
        p = &a[0];
    }
    p[0] = p[0] + 1.0;
    std::cout << a[0] << std::endl;
    p = p + 1;
    std::cout << p[0]
              << std::endl;
    std::cout << *(a+1) << std::endl;
    return 0;
}