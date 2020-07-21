#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> vec(4,2);
    vec.push_back(0); vec.push_back(1); vec.push_back(0);
    vec.push_back(-5); vec.push_back(-4); vec.push_back(-6);
    for (unsigned int i=0; i<vec.size(); i++)
        std::cout << vec.at(i) << " ";
    std::cout<<std::endl;
    for (int val=0; val<3; val++)
        std::cout <<
                  count(vec.begin(),vec.end(),val) << std::endl;
    std::cout << "\n";
    for (int val=0; val<3; val++)
        std::cout <<
                  count(vec.begin()+2,vec.end()-1,val) << std::endl;
    return 0;
}