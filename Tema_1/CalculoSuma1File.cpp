/*Programa sencillo en C++
escrito en un solo fichero*/
//Cabeceras
#include <iostream>
using namespace std;

//Prototipos de funciones
double suma(double, double);

//Variables globales
double x, y;

//Parte principal del programa
int main() //Funcion especial con el identificador de main
{
  double result;
  cout<<"Introduce el primer sumando";
  cin>>x;
  cout<<"Introduce el segundo sumando";
  cin>>y;
  result = suma(x,y);
  cout << "El resultado es: \n";
  cout <<result;
  return 0;
}

//Definición de la funcion suma
double suma(double x1, double y1)
{ //variable local
  double result;
  result = x1 + y1;
  return(result);
}

