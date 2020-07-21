#include <iostream>
#include <list>
#include <stdexcept>
#include <string>
#include <sstream>
#include <fstream>
int f(int n) throw (std::invalid_argument) {
    if ( n <= 0 )
        throw std::invalid_argument ("ERROR: n <= 0");
    if ( n % 2 == 0) // n es par
        return n/2;
    return 3*n+1; // n es impar
}

std::string lst2str(std::list<int> &sec) throw (std::invalid_argument) {
    std::stringstream ss;
    ss << "El numero de elementos es " << sec.size() << "\n";
    std::list<int>::iterator pS = sec.begin();
    while ( pS != sec.end() ) {
        if (*pS <= 0)
            throw std::invalid_argument ("elemento <= 0");
        for (int i=0; i<*pS; i++)
            ss << "*";
        ss << " " << *pS << "\n";
        pS++;
    }
    return ss.str();
}

int main() {
    std::cout << "Introduzca n" << std::endl;
    int n;
    std::cin >> n;
    std::list<int> lstSuc;
    lstSuc.push_back(n);
    while (n != 1) {
        try {
            n = f(n);
        } catch (std::invalid_argument exc) {
            std::cout << exc.what() << std::endl;
            return 0;
        }
        lstSuc.push_back(n);
    }
    std::string sResult;
    try {
        sResult = lst2str(lstSuc);
    } catch (std::invalid_argument exc) {
        std::cout << exc.what() << std::endl;
        return 0;
    }
    std::cout << sResult << std::endl;
    std::ofstream fileO("result.txt", std::ios::out | std::ios::trunc);
    if (!fileO) {
        std::cout << "Error al abrir fichero" << std::endl;
        return 0;
    }
    fileO << sResult << std::endl;
    fileO.close();
    return 0;
}