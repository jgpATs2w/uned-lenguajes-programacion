// Fichero: vectorComoLista.cpp
#include <iostream>
#include <vector>

int main()
{	
	// Inicialización (tamaño,valor)
	std::vector<double> v(5,0);      // v=(0,0,0,0,0)
	v[1]=1; v[2]=2; v[3]=3; v[4]=4;  // v=(0,1,2,3,4)
    std::cout << "1. Num componentes: " << v.size() <<  
	             ",\tv = ( "  << v[0] << ", " << v[1] << ", " << 
				 v[2] << ", " << v[3] << ", " << v[4] << " )" << 
				 std::endl;

	// Inicialización (iter1,iter2)
	std::vector<double> x(v.begin()+1, v.begin()+4); // x=(1,2,3)
	x[0]*=100; x[1]*=100; x[2]*=100;    // x=(100,200,300)
	std::cout << "2. Num componentes: " << x.size() <<  
	             ",\tx = ( "  << x[0] << ", " << x[1] << ", " << 
				 x[2] << " )" << std::endl;

	// insert(iter,iter1,iter2)
    v.insert(v.begin()+1, x.begin(), x.end()); // v=(0,100,200,300,1,2,3,4)
	std::cout << "3. Num componentes: " << v.size() <<  
	             ",\tv = ( "  << v[0] << ", " << v[1] << ", " << 
				 v[2] << ", " << v[3] << ", " << v[4] << ", " <<
				 v[5] << ", " << v[6] << ", " << v[7] << " )" << 
				 std::endl;

	// erase(iter)
    v.erase(v.begin()+4);              // v=(0,100,200,300,2,3,4)
	std::cout << "4. Num componentes: " << v.size() <<  
	             ",\tv = ( "  << v[0] << ", " << v[1] << ", " << 
				 v[2] << ", " << v[3] << ", " << v[4] << ", " <<
				 v[5] << ", " << v[6] << " )" << std::endl;

	// erase(iter1,iter2)
	v.erase(v.begin()+3, v.begin()+6);        // v=(0,100,200,4)
    std::cout << "5. Num componentes: " << v.size() <<  
	             ",\tv = ( "  << v[0] << ", " << v[1] << ", " << 
				 v[2] << ", " << v[3] << " )" << std::endl;

	// insert(iter,valor)
    v.insert(v.begin()+3, 77.7); // v=(0,100,200,77.7,4)
	std::cout << "6. Num componentes: " << v.size() <<  
	             ",\tv = ( "  << v[0] << ", " << v[1] << ", " << 
				 v[2] << ", " << v[3] << ", " << v[4] << 
				 " )" << std::endl;

	// insert(iter,valor)
    v.insert(v.begin()+1, *(x.begin()+2)); // v=(0,300,100,200,77.7,4)
	std::cout << "7. Num componentes: " << v.size() <<  
	             ",\tv = ( "  << v[0] << ", " << v[1] << ", " << 
				 v[2] << ", " << v[3] << ", " << v[4] << ", " <<
				 v[5] << " )" << std::endl;

	return 0;
}
