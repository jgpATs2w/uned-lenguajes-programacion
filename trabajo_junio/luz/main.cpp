#include <iostream>
#include <math.h>

int main() {
    float n1;
    float n2;
    float teta1;
    float teta2;
    float teta2max;

    std::cout << "Indice de refracción medio 1 (n1):";
    std::cin >> n1;

    if(n1<1){
        std::cout << "n1 no valido";
        return 1;
    }
    std::cout << "Indice de refracción medio 2  (n2):";
    std::cin >> n2;
    if(n2<1){
        std::cout << "n2 no valido";
        return 1;
    }
    std::cout << "Angulo incidencia (radianes):";
    std::cin >> teta1;
    if(teta1<0 || teta1>= M_PI_2){
        std::cout << "teta1 no valido";
        return 1;
    }


    teta2 = asin(n1/n2);
    teta2max = asin(n2/n1);

    if(teta2 > teta2max){
        std::cout << "no hay refracción";
    }else{
        std::cout << "teta2: " << teta2;
    }

    return 0;
}
