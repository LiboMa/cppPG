#include <iostream>
#include <string>
#include <cstring>

int main() {

    float a = 12.03;
    double b = 13.64444;

    int c;
    std::string s;

    c = (int) a;
    std::cout <<"cast float a to c: " << c<<std::endl;
    c = (int) b;
    std::cout <<"cast double b to c " << c<<std::endl;
    //s = boost::lexical_cast<std::string>(a+b);
    std::cout <<"using to_string to convert a+b " << std::to_string(a+b) <<std::endl;
    printf("%.8s \n", std::to_string(a+b).c_str());

}
