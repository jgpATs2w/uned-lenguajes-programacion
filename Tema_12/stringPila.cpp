//Fichero: stringPila.cpp

#include <iostream>
#include <stack>
#include <string>

int main() {
	// Declaración de la pila
	std::stack<std::string> pila;
    std::string palabra;

    //Lee las cadenas de caracteres introducidas por teclado
    while (std::cin >> palabra) {
        pila.push(palabra);
    }

    //Escribe todas las palabras en orden inverso
    while (!pila.empty()) {
       std::cout << pila.top() << std::endl;
       pila.pop();    //Quita el elemento superior
       }
    return 0;
}//end main
