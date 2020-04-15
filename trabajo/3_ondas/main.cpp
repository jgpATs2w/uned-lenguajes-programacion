#include <vector>
#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

int main() {
    const int u = 1;
    const double delta_x = 0.1;
    const double delta_t = 0.1;
    const double r = pow((u*delta_t/delta_x), 2);

    // Cambiar la ruta por una válida en el sistema en el que se va a ejecutar
    const std::string rutaFichero="/tmp/resultados.txt";

    std::vector<std::vector<double>> phi;
    for (int i =0; i<=10;i++){
        std::vector<double> phi_x(10,0);
        if(i>=2){
            for(int j = 0; j <=1; j++){
                if(j==0){
                    phi_x[j]= sin(M_PI * i);
                }else{
                    phi_x[j]= r/2*(sin(M_PI * (i+1)) - sin(M_PI * (i-1)));
                }
            }
        }
        phi.push_back(phi_x);
    }
    for (int i =2; i<10;i++){
        for(int j = 2; j <=10; j++){
            phi[i][j]= r*(phi[i+1][j-1]+phi[i-1][j-1]) - phi[i][j-2];
        }
    }

    std::ofstream outFich(rutaFichero.c_str(), std::ios::out | std::ios::trunc);
    if(!outFich){
        std::cerr <<  "Error al abrir " << rutaFichero;
        return 1;
    }
    for (int i =1; i<=10;i++){
        for(int j = 1; j <=10; j++){
            // se incluye la notación científica, porque el resultado es demasiado pequeño
            outFich << std::setw(15) << std::scientific << std::setprecision(4) << phi[i][j];
        }
        outFich << std::endl;
    }
    return 0;
}
