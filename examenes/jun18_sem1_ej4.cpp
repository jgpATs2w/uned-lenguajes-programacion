#include <iostream>
#include <iomanip>
#include<string>
#include "sstream"
#include <algorithm>

bool checkNonrepeated(unsigned int n){
    unsigned int n2 = n*n;
    std::string nString;
    std::stringstream stringstream;
    stringstream << n2 << n2 * n;
    nString = stringstream.str();

    for (int j = 0; j <= 9; j++) {
        std::stringstream stringstream1;
        stringstream1 << j;
        int pos = nString.find(stringstream1.str());
        if(pos < 0){
            return false;
        }
    }
    return true;
}

int main () {
    if(checkNonrepeated(19)){
        return 1;
    }
    if(!checkNonrepeated(69)){
        return 1;
    }
    for (unsigned int i = 1; i < 1000; ++i) {
        if(checkNonrepeated(i)){
            std::cout << i << std::endl;
        }
    }
    return 0;
}