// Fichero: breakContinue.cpp
#include <iostream>

int main()
{	
   /* 
    *  Los dos bucles for escriben en la consola los números:
    *  0, 2, 4, 6, 8 y 10
    */
	for (int i=0; i<=10; i++) {
		if ( i%2 ) continue;
		std::cout << i << std::endl;
	}
	for (int i=0; ; i++) {
		if (i>10) break;
		if ( i%2 ) continue;
		std::cout << i << std::endl;
	}
	return 0;
}
