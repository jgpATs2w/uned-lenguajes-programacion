#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
    std::cout << "Valor inicial: ";
    double x_k;
    std::cin >> x_k;
    std::cout << "Numero de iteraciones: ";
    int N;
    std::cin >> N;
    if (N<=0) return 0;
    for (int k=0; k<=N; k++) {
        double f_k = std::pow(x_k,2) - 2;
        std::cout << k << "\t" <<
                  std::scientific << std::setprecision(10) <<
                  x_k << "\t" << f_k << "\t" << std::endl;
        double derf_k = 2*x_k;
        x_k = x_k - f_k/derf_k;
    }
    return 0;
}