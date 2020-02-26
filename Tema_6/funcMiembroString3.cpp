// Fichero: funcMiembroString3.cpp
#include <iostream>
#include <string>

int main()
{
	std::string s1 = "abcde";
	std::string s2 = "abc";

	std::cout << "Strings iniciales\n" <<
		"s1: " + s1 + "\ns2: " + s2 + "\n" << std::endl;

	// s1.compare(s2)
	// "abcde", "abc"
	std::cout << "Comp 0:\t" << s1.compare(s2) << std::endl;

	// s1.compare(i1,n1,s2)
	// "ab", "abc"
	std::cout << "Comp 1:\t" << s1.compare(0,2,s2) << std::endl;
	// "abc", "abc"
	std::cout << "Comp 2:\t" << s1.compare(0,3,s2) << std::endl;
	// "c", "abc"
	std::cout << "Comp 3:\t" << s1.compare(2,1,s2) << std::endl;


	// s1.compare(i1,n1,s2,i2,s2)
	// "abc", "bc"
	std::cout << "Comp 4:\t" << s1.compare(0,3,s2,1,2) << std::endl;
	// "abc", "abc"
	std::cout << "Comp 5:\t" << s1.compare(0,3,s2,0,3) << std::endl;
	// "de", "c"
	std::cout << "Comp 6:\t" << s1.compare(3,2,s2,2,1) << std::endl;

	return 0;
}

