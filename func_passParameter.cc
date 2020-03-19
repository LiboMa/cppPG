#include <iostream>



void reset(int &i) {
    i = 0;
}


int main () {
    int a = 10;
    reset(a);
    std::cout << a;

}
