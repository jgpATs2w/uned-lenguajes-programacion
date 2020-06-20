#include <iostream>
#include <iomanip>
#include<string>
#include "sstream"
#include <algorithm>

int n;
bool checkNonrepeated(unsigned int n){
    unsigned int n2 = n*n;
    std::string nString;
    nString = n2 << n2 * n;
    for (int i = 0; i < 9; ++i) {
        size_t ocurrences = std::count(nString.begin(), nString.end(), i);
        if(ocurrences != 1){
            return false;
        }
    }
    return true;
}

int main () {
    for (unsigned int i = 1; i < 100000; ++i) {
        if(checkNonrepeated(n)){
            std::cout << n << std::endl;
        }
    }
    return 0;
}