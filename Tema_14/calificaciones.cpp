//Fichero: calificaciones.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const std::string notaString[] = {"SS", "A", "NB", "SB", "MH"};
const double notaCorte[] = {5.0, 7.0, 9.0, 9.8};

std::string  calificacionesFun(double x) {
   std::string nota;
   if (x < notaCorte[0]) nota = notaString[0];
   else if (x < notaCorte[1]) nota = notaString[1];
   else if (x < notaCorte[2]) nota = notaString[2];
   else if (x < notaCorte[3]) nota = notaString[3];
   else nota = notaString[4];
   return nota;
}

int main()
{
   std::vector<double> v;
   double va[] = {10, 9, 8.5, 8, 7.75, 7, 6, 5, 4, 1, 0};
   int n = sizeof(va)/sizeof(double);

   v.assign(va,va+n);
   std::vector<std::string> calificaciones(v.size());

   std::vector<std::string>::iterator pEndD =
   transform(v.begin(),v.end(),calificaciones.begin(), calificacionesFun);

   std::cout << "Calificaciones obtenidas por los alumnos: ";
   for (std::vector<std::string>::iterator p=calificaciones.begin(); p!=pEndD; p++)
   std::cout << " "<< (*p);
   std::cout << std::endl << std::endl;

   for (int i = 0; i<sizeof(notaString)/sizeof(*notaString); i++)
   std::cout << "Número de " << notaString[i] << ": "
             << count(calificaciones.begin(), calificaciones.end(), notaString[i]) << std::endl;
   return 0;
}
