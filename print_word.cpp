#include <iostream>

int main() {
    //const string hexdigists = "0123456789ABCDEF";
    std::cout << "Enter a series of numbers between 0 and 15"<< std::endl;
    int v1 = 1, v2 = 12;

    std::cin >> v1 >> v2;

    std::cout << v1 + v2 << std::endl;
    return 0;

}
