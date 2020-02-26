// Fichero: algTransform1.cpp
#include <iostream>
#include <list>
#include <string>
#include <algorithm>

double inverso(int n) { return 1.0/n; }

std::string parImpar(int n) {
	if (n%2) return "impar";
	return "par";
}

int main()
{	
	std::list<int> listaI;   // Lista origen
	for (int i=1; i<6; i++) 
		listaI.push_back(i);
	std::cout << "listaI:";
	for (std::list<int>::iterator p=listaI.begin(); p!=listaI.end(); p++)
		std::cout << " " << (*p);

	// Tranformación mediante la función inverso
	std::list<double> listaD(listaI.size());  // Lista destino
	std::list<double>::iterator pEndD = 
		transform(listaI.begin(),listaI.end(),listaD.begin(),inverso);
	std::cout << "\nlistaD:";
	for (std::list<double>::iterator p=listaD.begin(); p!=pEndD; p++)
		std::cout << " " << (*p);

	// Transformación mediante la función parImpar
	std::list<std::string> listaS(listaI.size()); // Lista destino
	std::list<std::string>::iterator pEndS =
		transform(listaI.begin(),listaI.end(),listaS.begin(),parImpar);
	std::cout << "\nlistaS:";
	for (std::list<std::string>::iterator p=listaS.begin(); p!=pEndS; p++)
		std::cout << " " << (*p);
	std::cout << std::endl;
	return 0;
}
