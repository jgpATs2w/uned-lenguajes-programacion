#include <iostream>
#include <map>
#include <fstream>
int main() {
    std::ifstream inFich("datos.txt", std::ios::in);
    if (!inFich) {
        std::cout << "Fichero no encontrado" << std::endl;
        return 0;
    }

    std::map<int,int> mPal;
    mPal[1] = 0;
    mPal[2] = 0;
    mPal[4] = 0;
    mPal[8] = 0;

    std::string s;
    while ( !inFich.eof() ) {
        inFich >> s;
        if ( !inFich.eof() ) {
            switch ( s.size() ) {
                case 1:
                    if ( s == "0")
                        mPal[1] = mPal[1] + 1;
                    break;
                case 2:
                    if ( s == "01")
                        mPal[2]++;
                    break;
                case 4:
                    if ( s == "0110")
                        mPal[4]++;
                    break;
                case 8:
                    if ( s == "01101001")
                        mPal[8]++;
                    break;
                default:
                    break;
            }
        }
    }
    inFich.close();
    std::cout << mPal[1] << ", " << mPal[2] << ", "
              << mPal[4] << ", " << mPal[8] << std::endl;
    return 0;
}