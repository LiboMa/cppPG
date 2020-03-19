#include <iostream>

int main() {
    int a = 1;
    int *b = &a;
    int c = *b;

    std::cout <<"a :" << a <<std::endl;
    std::cout <<"a pointer :" << &a << std::endl;
    // std::cout <<"a pointer var :" << (*a) << std::endl; // error, this no pointer var of a, a is not a pointer
    std::cout << std::endl;

    std::cout <<"b:" << b <<std::endl;
    std::cout <<"b pointer :" << &b << std::endl;
    std::cout <<"b pointer var: " << *b << std::endl;
    std::cout << std::endl;

    std::cout <<"c :" << c <<std::endl;
    std::cout <<"c pointer :" << &c << std::endl;
    //std::cout <<"c pointer var is " << *c; // error, this is no *c variable
    //
    //
    // example in bash shell:
    // 1. 
    // host = Pointer_var_0x7ffeec1c36fc
    // Pointer_var_0x7ffeec1c36fc = 192.168.1.10
    // 
    // 2. get the value
    // echo ${!host} , get -> 192.168.1.10, like std::cout << a operations
    // echo ${host}, get -> Pointer_var_0x7ffeec1c36fc
    // echo ${Pointer_var_0x7ffeec1c36fc} -> 192.168.1.10, like, std::count <<*b operation
}
