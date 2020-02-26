// Fichero: vectorAssign.cpp
#include <iostream>
#include <vector>

int main()
{	
    std::vector<double> v;  // cero componentes
    std::cout << "1. Num componentes: " << v.size() <<  
                 ",\tVacio?: " << std::boolalpha << v.empty() << std::endl;

    // assign(tamaño,valor)
    v.assign(3,10);   // v = (10, 10, 10)
    std::cout << "2. Num componentes: " << v.size() <<  
	             ",\tVacio?: " << v.empty() <<  
	             ",\tv = ( " << v[0] << ", " <<
		         v[1] << ", " << v[2] << " )" << std::endl;

	// Inicialización (tamaño, valor)
	std::vector<double> x(4,0);      // x = (0,0,0,0)
	x[0]=0; x[1]=1; x[2]=2; x[3]=3;  // x = (0,1,2,3)
    std::cout << "3. Num componentes: " << x.size() <<  
	             ",\tVacio?: " << x.empty() <<  
	             ",\tx = ( " << x[0] << ", " << x[1] << 
				 ", " << x[2] << ", " << x[3] << " )" << std::endl;

	// assign(iter1,iter2)
    v.assign(x.begin()+1,x.end()-1); // v = (x[1], x[2]) = (1,2)
    std::cout << "4. Num componentes: " << v.size() <<  
	             ",\tVacio?: " << v.empty() <<  
	             ",\tv = ( " << v[0] << ", " << 
				 v[1] << " )" << std::endl;

	// Inicialización copiando vector
	std::vector<double> w = v;  // w = (1,2)
    std::cout << "5. Num componentes: " << w.size() <<  
	             ",\tVacio?: " << w.empty() <<  
	             ",\tw = ( " << w[0] << ", " << 
				 w[1] << " )" << std::endl;

    // Asignación desde un array
	double a[] = {9,8,7,6};
	w.assign(a,a+4); //  w = (9,8,7,6)
	std::cout << "6. Num componentes: " << w.size() <<  
	             ",\tVacio?: " << w.empty() <<  
	             ",\tw = ( " << w[0] << ", " << w[1] << ", " <<
	             w[2] << ", " << w[3] << " )" << std::endl;

	return 0;
}
