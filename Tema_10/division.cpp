// Fichero: division.cpp
#include <stdexcept>
#include <sstream>
#include "division.h"

int division (int i1, int i2) throw (std::invalid_argument)
{
	if (!i2) {
		std::stringstream ss;
		ss << i1 << "/" << i2 << " Error: Division por cero!";
	    throw std::invalid_argument (ss.str());
	}
   return i1/i2;
}
