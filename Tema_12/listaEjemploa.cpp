// listaEjemploa.cpp

    #include <iostream>
    #include <list>
    #include <iterator>
    #include <sstream>
    using namespace std;


    std::string listaInt2string(std::list<int> &lst) {
        std::stringstream ss;
        if (lst.empty()) {
            ss << "(lista vacia)";
        } else {
            std::list<int>::iterator p = lst.begin();
            ss << "("<< lst.size() << " elementos):\t";
            while (p!=lst.end()) {
                ss << *p << " ";
                p++;
            }//FIN WHILE
        } //FIN IF
        return ss.str();
    }

    int main()
    {
        list<int> lista1, lista2;

        for (int i=0; i<6; ++i) {
            lista1.push_back(i);
            lista2.push_front(i);
        }
        std::cout << "lista1 -1 "<< listaInt2string(lista1) << std::endl;
        std::cout << "lista2 -1 "<< listaInt2string(lista2) << std::endl;

        lista2.splice(find(lista2.begin(),lista2.end(), 3), lista1);
        std::cout << "lista1 -2 "<< listaInt2string(lista1) << std::endl;
        std::cout << "lista2 -2 "<< listaInt2string(lista2) << std::endl;

        lista2.splice(lista2.end(),  lista2, lista2.begin());
        std::cout << "lista1 -3 "<< listaInt2string(lista1) << std::endl;
        std::cout << "lista2 -3 "<< listaInt2string(lista2) << std::endl;

        lista2.sort();
        lista1 = lista2;
        std::cout << "lista1 -4 "<< listaInt2string(lista1) << std::endl;
        std::cout << "lista2 -4 "<< listaInt2string(lista2) << std::endl;

        lista1.merge(lista2);
        std::cout << "lista1 -5 "<< listaInt2string(lista1) << std::endl;
        std::cout << "lista2 -5 "<< listaInt2string(lista2) << std::endl;
     }
