#include <iostream>
#include <math.h>
#include <fstream>
#include<list>
#include <string>
#include <vector>
#include <sstream>

const std::string nombreFich = "/home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/2_distancia/puntos.txt";
typedef std::vector<std::string> StringVector;

void readFile(const std::string& filename, char sep, StringVector& output, double a, double b, double c)
{
    int x1, x2;
    double dist, distMax = 0;
    std::ifstream src(filename);

    if (!src)
    {
        std::cerr << "\aError opening file.\n\n";
        exit(EXIT_FAILURE);
    }
    std::string buffer;
    size_t strpos = 0;
    size_t endpos;
    while(std::getline(src, buffer))
    {
        std::string substr;
        std::vector<std::string> result;
        std::stringstream ss(buffer);
        std::string token;
        while (getline(ss,token, ',')){
            result.push_back( token );
        }
        x1 = std::stoi(result.at(0));
        x2 = std::stoi(result.at(1));

        dist = abs(a * x1 + b * x2 + c) / sqrt(a * a + b * b);

        if(dist > distMax){
            distMax = dist;
            output.push_back(buffer);
        }else if(dist == distMax){
            output.push_back(buffer);
        }
    }
}

int main() {
    float a;
    float b;
    float c;
    StringVector numbers;

    std::string punto;
    std::list<std::string> puntos;

    std::cout << "a: ";
    //std::cin >> a;
    std::cout << "b: ";
    //std::cin >> b;
    std::cout << "c: ";
    //std::cin >> c;
    a=1; b=1; c=0;
    if( a == 0 && b == 0 ){
        std::cout << "coeficientes no validos";
        return 1;
    }

    readFile(nombreFich, ',', numbers, a, b, c);

    return 0;
}
