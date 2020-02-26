// Fichero: estimacionPi.cpp
#include<iostream>
#include<cmath.>
#include<iomanip>

const double pi = 3.14159265358979323846;

int main()
{
	// Selección del método
	char metodo;
	std::cout << "1: Metodo de Leibniz\n" 
			"2: Metodo de Brent-Salamin\n"
			"Por favor, seleccione el metodo: ";
	std::cin >> metodo;
	if (metodo!='1' && metodo!='2') return 1;
	// Estimación de PI
	double estimacionPi = 0;
	// 1: Método de Leibniz
	if (metodo=='1') {
		std::cout << "Numero de terminos de la serie: ";
		int M_Lieb;
		std::cin >> M_Lieb;
		for (int n=0; n<M_Lieb; n++)
			estimacionPi += pow(-1.0,n)/(2*n+1);
		estimacionPi *= 4;
	}
	// 2: Metodo de Brent-Salamin
	if (metodo=='2') {
		std::cout << "Numero de iteraciones: ";
		int M_BS;
		std::cin >> M_BS;
		double a_aux, a = 1;
		double b_aux, b = 1/sqrt(2.0);
		double t_aux, t = 0.25;
		double p_aux, p = 1;
		for (int n=0; n<M_BS; n++) {
			a_aux =(a+b)/2;
			b_aux = sqrt(a*b);		
			t_aux = t - p*pow(a-a_aux,2);
			p_aux = 2*p;
			a = a_aux;  b = b_aux;
			t = t_aux;  p = p_aux;	
		}
		estimacionPi = pow((a+b),2)/(t*4);
	}
	std::cout << "Valor de pi: " << std::setprecision(20) <<
			estimacionPi << '\n' <<
			"Error: " << pi-estimacionPi << "\n";
	return 0;
}

