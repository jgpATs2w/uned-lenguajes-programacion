#include <iostream>
#include<vector>
#include <stdexcept>

std::vector<bool> sucThueMorse(int N) throw(std::invalid_argument);

int main() {
    std::cout << "Introduzca N" << std::endl;
    int N;
    std::cin >> N;
    std::vector<bool> v;
    try {
        v = sucThueMorse(N);
    } catch (std::invalid_argument exc) {
        std::cout << exc.what() << std::endl;
        return 0;
    }

    for (unsigned int i = 0; i < v.size(); i++)
        std::cout << v[i];
    std::cout << std::endl;
    return 0;
}

std::vector<bool> sucThueMorse(int N) throw(std::invalid_argument) {
    if (N < 1)
        throw std::invalid_argument("ERROR: N menor que uno");

    std::vector<bool> v(1, 0);
    for (int i = 1;i<N;i++ ) {
        int nComp = v.size();
        for (int j = 0;j<nComp;j++ )
            v.push_back( !v[j] );
    }
    return v;
}