#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
const std::string nombreFich = "datos.txt";
int numDatosFueraIntervalo(std::vector<double>&, double, double)
throw (std::invalid_argument);
int main() {
    std::ifstream file_in(nombreFich.c_str(),std::ios::in);
    if (!file_in) {
        std::cout << "No se puede abrir el fichero"
                  << std::endl;
        return 0;
    }
    std::vector<double> vectorDatos;
    while (!file_in.eof()) {
        double d;
        file_in >> d;
        if (file_in.eof()) break;
        vectorDatos.push_back(d);
    }
    file_in.close();
    double intervL, intervH;
    std::cout << "Extremo inferior:" << std::endl;
    //std::cin >> intervL;
    std::cout << "Extremo superior:" << std::endl;
    //std::cin >> intervH;
    intervL = 1;
    intervH = 3;
    try {
        std::cout << "Numero de datos: "
                  << numDatosFueraIntervalo(vectorDatos, intervL, intervH)
                  << std::endl;
    } catch (std::invalid_argument exc) {
        std::cout << exc.what() << std::endl;
    }
    return 0;
}

int numDatosFueraIntervalo(std::vector<double> &vectorDatos, double intervL,
                           double intervH)
throw (std::invalid_argument) {
    if ( intervL > intervH )
        throw std::invalid_argument("Intervalo mal definido");
    int num = 0;
    for (int i=0; i<vectorDatos.size(); i++)
        if (vectorDatos[i]<intervL || vectorDatos[i]>intervH)
            num++;
    return num;
}