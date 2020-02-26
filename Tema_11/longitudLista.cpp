// longitudLista.cpp

int Longitud (struct nodo* head) {
   struct nodo* actual = head;
   int cont = 0;
   while (actual) {
      cont++;
      actual = actual->next;
   }
   return cont;
}
