// Fichero: operStringEjer.cpp
#include <iostream>
#include <string>
int main()
{
std::string nombre;
std::string apellido1;
std::string apellido2;
std::string apellidos;
std::string nombreCompleto;
std::string salto = "\n";


apellidos = apellido1 + " " +apellido2;
nombreCompleto = nombre + " " +apellidos;

std::cout << "Introduzca el nombre: ";
std::cin >> nombre;

std::cout << "Introduzca el primer apellido: ";
std::cin >> apellido1;

std::cout << "Introduzca el segundo apellido: ";
std::cin >> apellido2;

apellidos = apellido1 + " " + apellido2;
nombreCompleto = nombre + " " + apellidos;

std::cout << "Nombre completo introducido: " + nombreCompleto << std::endl;

std::cout << "El nombre es Juan?: " << std::boolalpha<<(nombre == "Juan") << salto;

std::cout << "El primer apellido empieza por M?: " <<  std::boolalpha<<(apellido1[0]=='M') << salto;

std::cout << "El nombre tiene "<<nombre.size()<<" caracteres"<<salto;

std::cout << "Indice en que aparece la cadena de caracteres an: " << nombre.find("an")<<std::endl;
return 0;
}
