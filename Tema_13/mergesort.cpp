//File: mergesort.cpp

#include <iostream>
#include <vector>
#include <stdexcept>

void mergesort ( std::vector<int> &a, int liminf, int limsup);
void merge(std::vector<int> &a, int liminf, int medio, int limsup);

int main()
{
    std::vector<int> vec;
    std::cout << "Introduzca los valores: ";
    int x;
    while (std::cin >> x)
      vec.push_back(x);
    if (std::cin.fail() && !std::cin.eof()) {
      std::cerr << "Valores no validos" << std::endl;
      return -1;
    }
     mergesort(vec, 0, vec.size()-1);
      for (unsigned i = 0; i<vec.size(); i++)
    	  std::cout<<vec[i]<<std::endl;
    return 0;
}

void mergesort ( std::vector<int> &a, int liminf, int limsup){
    if (liminf<limsup){
      int medio = liminf+((limsup-liminf)/2);
      mergesort(a, liminf, medio);
      mergesort(a, medio+1, limsup);
      merge(a, liminf, medio, limsup );
    }
    else return;
}

void merge( std::vector<int> &a, int liminf, int medio, int limsup){
	//Crear vectores L y R
	std::vector<int> L, R;
    int sizeL = (medio-liminf)+1;
    int sizeR = (limsup-medio);
    L.resize(sizeL);
    R.resize(sizeR);
    std::vector<int>::iterator itrFirst, itrLast;
    itrFirst = a.begin()+liminf;
    itrLast = itrFirst+sizeL;
    std::copy(itrFirst, itrLast, L.begin());
    itrFirst = a.begin()+medio+1;
    itrLast = itrFirst+sizeR;
    std::copy(itrFirst, itrLast, R.begin());

 	int lIndex = 0;
	int rIndex = 0;
	int copyIndex = liminf;
    while (copyIndex<=limsup &&
    		lIndex<sizeL && rIndex<sizeR){
       if (L[lIndex]<=R[rIndex])
        a[copyIndex++] = L[lIndex++];
       else
          a[copyIndex++] = R[rIndex++];
    }
    //Copia los terminos restantes de L a a
    while (copyIndex <= limsup && lIndex < sizeL)
       a[copyIndex++] = L[lIndex++];
    //Copia los términos restantes de R a a
    while (copyIndex <= limsup && rIndex<sizeR)
       a[copyIndex++] = R[rIndex++];
    return;
}
