/*Programa sencillo en C++
escrito en tres ficheros*/
//Cabeceras
#include <iostream>
using namespace std;

//Variables globales
double x, y;

//Parte principal del programa
int main() //Funcion especial con el identificador de main
{
  double result;
  int i;
  for ( i = 1; i<10; i++){
  cout<<"La variable i tiene el valor "<<i<<endl;
  }
  cout<<"Salimos del for, con i teniendo el valor " <<i<<endl;

  return 0;
}

