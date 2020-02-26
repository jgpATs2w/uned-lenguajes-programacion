//Fichero ordena2Pilas.cpp
#include <iostream>
#include <stack>
void ordena( int x, std::stack<int> &pila1);

int main() {
    int x = 1; //Nuevo numero introducido por teclado
    std::stack<int> pila1;
    std::cout << "Introduce un numero entero \n ";
    while( std::cin>>x)
      ordena(x, pila1);
    if (std::cin.fail() && !std::cin.eof()) {
      std::cerr << "El último valor introducido "
                << "no era válido" << std::endl;
    }
    std::cout << "Secuencia ordenada: \n ";
    while(!pila1.empty()){
      std::cout << pila1.top()<< std::endl;
      pila1.pop();
    }
}

void ordena( int x, std::stack<int> &pila1){
    std::stack<int> pila2;
    bool iter = true;
    while(iter){
      if (pila1.empty()){
         pila1.push(x);
         iter = false;
      }
      else{
         int y = pila1.top();
         pila1.pop();
         if (y>x){
             pila1.push(y);
             pila1.push(x);
             iter = false;
         }
         else
             pila2.push(y);
     }
    }//End while
    while(!pila2.empty()){
      pila1.push(pila2.top());
      pila2.pop();
	}
}
