//Fichero: emparejaPalabrasCola.cpp

#include <iostream>
#include <queue>

int main() {
  std::queue<std::string> qmay, qmin;
  std::string cadena;
  while (std::cin >> cadena) {
    if (cadena[0]>='A' and cadena[0]<='Z') qmay.push(cadena);
    else if (cadena[0]>='a' and cadena[0]<='z') qmin.push(cadena);
  }

  while (!qmay.empty() && !qmin.empty()) {
    std::cout << qmay.front();
    std::cout<< "-" << qmin.front() << std::endl;
    qmay.pop();
    qmin.pop();
  }

  std::cout << "Sobran " << (qmay.size()+qmin.size())
       << " palabras." << std::endl;
}
