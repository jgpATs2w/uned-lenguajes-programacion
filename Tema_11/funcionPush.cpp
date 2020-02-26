// funcionPush.cpp
#include <iostream>

struct nodo {
  int dato;
  struct nodo* next;
};

void Push(struct nodo** refCabecera, int dato);

int main()
{
    struct nodo* nodoCabeza = 0;
    struct nodo* nodo1;
    Push(&nodoCabeza, 3);
    Push(&nodoCabeza, 2);
    Push(&nodoCabeza, 1);
    nodo1 = nodoCabeza;

    while (nodo1){
      std::cout << "Elemento contenido en la lista: " <<
              nodo1->dato << std::endl;
      nodo1 = nodo1->next;
    }
    return 0;
}

void Push(struct nodo** refCabecera, int dato) {
      struct nodo* newNodo = new nodo;
      newNodo->dato = dato;
      newNodo->next = *refCabecera; // El '*' desreferencia a la cabecera
      *refCabecera = newNodo; // ditto
}
