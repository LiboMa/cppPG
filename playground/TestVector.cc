#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {

    //std::vector<int> a = {1,2,3};
    std::vector<int> mem = {1,2,3}; // kind of list, dynamic array
    std::string b = "hello wooooorld";
    cout << mem.size() <<endl;
    mem.push_back(20);

    mem.push_back(21);
    mem.pop_back();
    for(int i=0; i<mem.size(); i++){
        cout<<mem[i]<<" ";
        cout<<&mem << endl;
    }
        cout<<""<< endl;

    return 0;

}

