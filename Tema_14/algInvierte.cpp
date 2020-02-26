// Fichero: algInvierte.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void imprimevector(std::vector<int> &v) {
	for (unsigned int i=0; i<v.size()-1; i++)
		std::cout << v[i] << ",";
	std::cout << v[v.size()-1] << std::endl;
	return;
}

int main()
{	
	std::vector<int> v;
	for (int i=0; i<10; i++)
		v.push_back(i);  	
	imprimevector(v);    // v=(0,1,2,3,4,5,6,7,8,9)

	std::vector<int>::iterator pBegin = v.begin()+3;  
	std::vector<int>::iterator pEnd   = v.begin()+6;  
	std::cout <<	"(*pBegin): " << (*pBegin) << 
					"\t(*pEnd): " << (*pEnd)   << std::endl;

	reverse(pBegin,pEnd);  	
	imprimevector(v);   // v=(0,1,2,5,4,3,6,7,8,9)
	std::cout <<	"(*pBegin): " << (*pBegin) << 
					"\t(*pEnd): " << (*pEnd)   << std::endl;
	return 0;
}
