#include<iostream>
#include<vector>
#include<array>

using namespace std;

void print_vector(std::vector<int> data) {

    for(int i = 0; i< data.size(); i++) {
        std::cout<< data[i] <<"  ";
    }
}

int main() {

    vector<int> items={1,2,3};
    vector<long> itemsLong={1,2,3};
    array<int, 5> aitems={1,2,3};


    cout << "size: "  << items.size()<<endl;
    cout << "array templ size: "  << aitems.size()<<endl;
    cout << "max size of vector: " << items.max_size()<<endl;
    cout << "max size of Long vector: " << itemsLong.max_size()<<endl;
    cout << "empty? " << items.empty()<<endl;
    items.size() == items.capacity() ? cout << "" << items.capacity()<<endl:
    cout<<"not equals"<<endl;

    cout<<"elements of vectory list =>";
    print_vector(items);
    cout<<endl;
}
