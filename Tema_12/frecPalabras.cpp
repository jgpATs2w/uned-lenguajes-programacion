//Fichero: frecPalabras.cpp

#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> frec;
    std::string cadena;           // input buffer for words.

    while (std::cin >> cadena) frec[cadena]++;

    //Impresión de todos los elementos del mapa
    std::map<std::string, int>::iterator iter;
    for (iter=frec.begin(); iter != frec.end(); ++iter)
      std::cout << iter->second << " " << iter->first << std::endl;

    //Búsqueda del elemento con la clave "hola"
    iter = frec.find("hola");
    if (iter!=frec.end()) {
       std::cout << "La palabra hola "
                 <<"se introdujo "
                 <<iter->second << " veces."<<std::endl;
    } else
       std::cout << "La palabra hola no está "<< std::endl;
    return 0;
}//end main

