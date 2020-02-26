// Fichero: ambitoVisibilidad1.cpp
#include <iostream>

int x = 0;    // x global

int main()
{   // --- Inicio Bloque 1
	std::cout << x << ::x;   // cout << x global << x global

	{	// --- Inicio Bloque 2a
		std::cout << x << ::x;    // cout << x global << x global
	}	// --- Fin Bloque 2a

	int x = 1;                // x bloque 1
	std::cout << x << ::x;    // cout << x bloque 1 << x global

    {   // --- Inicio Bloque 2b
		std::cout << x << ::x;    // cout << x bloque 1 << x global
		int x = 2;                // x bloque 2b
        std::cout << x << ::x;    // cout << x bloque 2b << x global

		{   // --- Inicio Bloque 3a
			std::cout << x << ::x;     // cout << x bloque 2b << x global
			int x = 3;                 // x bloque 3a
			std::cout << x << ::x;     // cout << x bloque 3a << x global
		}   // --- Fin Bloque 3a

		{	// --- Inicio Bloque 3b
			std::cout << x << ::x;     // cout << x bloque 2b << x global
		}	// --- Fin Bloque 3b

    }	// --- Fin Bloque 2b

	std::cout << x << ::x;    // cout << x bloque 1 << x global
	return 0;
}   // --- Fin Bloque 1

