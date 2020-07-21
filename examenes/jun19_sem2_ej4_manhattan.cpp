#include <iostream>
int xd=0, yd=0; // Coordenadas destino
int calcTray(int x, int y) {
    if (x==xd && y==yd) return 1;
    int nTray = 0;
    if (x<xd) nTray = calcTray(x+1,y);
    if (y<yd) nTray += calcTray(x,y+1);
    return nTray;
}

int main() {
    std::cout << "Introduzca coordenadas destino:"
              << std::endl;
    std::cin >> xd >> yd;
    if (xd<0 || yd<0) {
        std::cout << "Coordenadas no validas" << std::endl;
        return 0;
    }

    std::cout << "Numero de posibles trayectorias: " <<
              calcTray(0,0) << std::endl;
    return 0;
}