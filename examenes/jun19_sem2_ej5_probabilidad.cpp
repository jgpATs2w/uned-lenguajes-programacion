#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>
// ceil()
std::string nombreFich = "obsU.txt";
std::vector<int> vectorFuncProb() {
    std::vector<int> vFuncProb;
    for (unsigned int k = 1; k <= 10; k++)
        for (unsigned int j = 1; j <= k; j++)
            vFuncProb.push_back(k);
    return vFuncProb;
}
std::list<double> leeFich(std::string &nombreFich)
throw (std::invalid_argument) {
    std::ifstream inFich(nombreFich.c_str(), std::ios::in);
    if (!inFich)
        throw std::invalid_argument ("ERROR al abrir fichero " + nombreFich);
// Lectura del fichero
    std::list<double> listaNumPseudoaleatorios;
    while ( !inFich.eof() ) {
        double num;
        inFich >> num;
        if (inFich.eof()) break;
        listaNumPseudoaleatorios.push_back(num);
    }
    inFich.close();
    return listaNumPseudoaleatorios;
}
int main() {
// Declaración y asignación de valores al array a
    std::vector<int> vFuncProb = vectorFuncProb();
// Lee los números de fichero y los devuelve en una lista
    std::list<double> numerosPseudo;
    try {
        numerosPseudo = leeFich(nombreFich);
    } catch (std::invalid_argument &exc) {
        std::cout << exc.what() << std::endl;
        return 0;
    }
// Genera observaciones de la variable aleatoria discreta
    std::list<int> distDiscreta;
    std::list<double>::iterator p = numerosPseudo.begin();
    while (p != numerosPseudo.end()) {
        distDiscreta.push_back(vFuncProb[std::ceil((*p)*vFuncProb.size())-1]);
        p++;
    }
// Escritura de resultados en la consola
    for (unsigned int k=1; k<=10; k++) {
        double p_calc
                =
                (double) std::count(distDiscreta.begin(), distDiscreta.end(), k) /
                distDiscreta.size();
        std::cout << "x = " << k << "\t"
                  << std::fixed
                  << std::setprecision(4)
                  << "p(calculada) = " << p_calc
                  << std::endl;
    }
    return 0;
}