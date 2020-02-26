// Fichero: algTransform2.cpp
#include <iostream>
#include <list>
#include <string>
#include <algorithm>

double valMax (double x1, double x2) {
	if (x1>x2) return x1;
	return x2;
}

int main()
{	
	std::list<double> listaO1;   // Lista origen 1
	listaO1.push_back(1.2);  listaO1.push_back(3.23);
	listaO1.push_back(-1.3); listaO1.push_back(4.6);
	std::cout << "listaO1:";
	for (std::list<double>::iterator p=listaO1.begin(); p!=listaO1.end(); p++)
		std::cout << "\t" << (*p);


	std::list<double> listaO2;   // Lista origen 1
	listaO2.push_back(4.2); listaO2.push_back(-3.12);
	listaO2.push_back(6.2); listaO2.push_back(-5.23);
	std::cout << "\nlistaO2:";
	for (std::list<double>::iterator p=listaO2.begin(); p!=listaO2.end(); p++)
		std::cout << "\t" << (*p);

	// Tranformación mediante la función valMax
	std::list<double> listaD(listaO1.size());  // Lista destino
	std::list<double>::iterator pEndD = 
		transform(listaO1.begin(),listaO1.end(),listaO2.begin(),
					listaD.begin(),valMax);
	std::cout << "\nlistaD: ";
	for (std::list<double>::iterator p=listaD.begin(); p!=pEndD; p++)
		std::cout << "\t" << (*p);

	return 0;
}
