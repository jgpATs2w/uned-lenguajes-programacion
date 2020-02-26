// construyeListaSimple.cpp
#include <iostream>

struct nodo {
  int dato;
  struct nodo* next;
};

struct nodo* construyeLista();
int main()
{
    struct nodo* nodoCabeza = construyeLista();
    struct nodo* nodo1;
    nodo1 = nodoCabeza;

    while (nodo1){
      std::cout << "Elemento contenido en la lista: " <<
              nodo1->dato << std::endl;
      nodo1 = nodo1->next;
    }
    return 0;
}

struct nodo* construyeLista() {
   struct nodo* uno = new nodo;
   struct nodo* dos = new nodo;
   struct nodo* tres = new nodo;
   uno->dato = 1;
   uno->next = dos;
   dos->dato = 2;
   dos->next = tres;
   tres->dato = 3;
   tres->next = NULL;
   return uno;
}

