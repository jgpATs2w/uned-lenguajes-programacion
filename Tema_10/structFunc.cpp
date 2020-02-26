// Fichero: structFunc.cpp
#include <iostream>
#include <sstream>

struct Punto {
	double x;
	double y;
};

Punto sumaPuntos(Punto p1, Punto p2) {
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

std::string punto2string(Punto p) {
	std::stringstream ss;
	ss << "(" << p.x << "," << p.y << ")";
	return ss.str();
}

int main()
{	
	Punto a = {2,-3};
	Punto b = {1,0};
	Punto c = sumaPuntos(a,b);
	std::cout << "a = " << punto2string(a) << std::endl;
	std::cout << "b = " << punto2string(b) << std::endl;
	std::cout << "c = " << punto2string(c) << std::endl;
	return 0;
}
