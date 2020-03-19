#include <iostream>
#include <initializer_list>

using std::begin;
using std::end;
using std::string;

void printlnInt(const int *beg, const int *end) {

    while(beg != end) {
        std::cout <<*beg++<<std::endl;
    }
}

void printlnChar(const string *beg, const string *end) {

    while(beg != end) {
        std::cout <<*beg++<<std::endl;
    }
}

int main () {

    int j[] = {1,2};
    string au[] = {"2","3"};

    string s1[] = {"hello", "world", "!"};
    printlnInt(begin(j), end(j));
    printlnChar(begin(s1), end(s1));
    std::cout << au[0].size();
}
