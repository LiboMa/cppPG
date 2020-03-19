#include <iostream>


void fab(int val) {
    int ret = 1;

    while(val > 1 ) 
        ret *= val--;
    std::cout <<"fab of "<<val<<" is: "<<ret <<std::endl;
    //return ret;

}

int main(){

    int val = 5, result;

    //result = fab(val);
    fab(val);
    //std::cout <<result<<std::endl;
}
