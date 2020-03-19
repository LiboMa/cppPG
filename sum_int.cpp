#include <iostream>

int main() {
    //const string hexdigists = "0123456789ABCDEF";
    int sum  = 0, value = 0;
    int i = 0;

    while(std::cin >> value)
        sum += value;
        i++;

        if (i > 10) {
            std::cout << i << std::endl;
        }

    std::cout << "Sum is : " << sum << std::endl;

    return 0;

}
