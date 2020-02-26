// Fichero: excepciones1.cpp
#include <iostream>
#include <string>

enum miTipoExcep1 { error1a, error1b, error1c };
enum miTipoExcep2 { error2a, error2b };
enum miTipoExcep3 { error3a };

int main()
{
    for (int i=1; i<9; i++) 
 	try {
	   int          n    = 1;
	   double       x    = 3.14;
	   char         c    = 'a';
	   std::string  s    = "Excepcion";
	   bool         a    = true;
	   miTipoExcep1 mte1 = error1b;
	   miTipoExcep2 mte2 = error2a;
	   miTipoExcep3 mte3 = error3a;
	   switch (i) {
		  case 1: throw n;
		  case 2: throw x;
		  case 3: throw c;
		  case 4: throw s;
		  case 5: throw a;
		  case 6: throw mte1;
		  case 7: throw mte2;
		  case 8: throw mte3;
		  default: 
			  std::cout << 
				  "**ERROR**: Entrada no valida." << std::endl;
	   }
   }
   catch ( char exc ) {
	   std::cout << "Excepcion de tipo char:\t\t" << exc << std::endl;
   }
   catch ( int exc ) {
	   std::cout << "Excepcion de tipo int:\t\t" << exc << std::endl;
   }   
   catch ( double exc ) {
	   std::cout << "Excepcion de tipo double:\t" << exc << std::endl;
   }
   catch ( bool exc ) {
	   std::cout << "Excepcion de tipo bool:\t\t" << std::boolalpha 
		   << exc << std::endl;
   }
   catch ( std::string exc ) {
	   std::cout << "Excepcion de tipo string:\t" << exc << std::endl;
   }
   catch ( miTipoExcep1 exc ) {
	   std::cout << "Excepcion de tipo miTipoExcep1:\t" << exc << std::endl;
   }
   catch ( miTipoExcep2 exc ) {
	   std::cout << "Excepcion de tipo miTipoExcep2:\t" << exc << std::endl;
   }
   catch (...) {
      std::cout << "Excepcion de otro tipo." << std::endl;
   }
   return 0;
}
