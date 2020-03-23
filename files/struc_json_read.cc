#include <iostream>
#include <string>

using namespace std;

struct Agent {

    int id;
    string name;
    int age;
    string country;
    string greetings;
};

int main() {

    Agent auser;

    auser.id = 1;
    auser.name = "James Brown";
    auser.age = 36;
    auser.country = "GabonCongo";
    auser.greetings = "Hey, Guten Tag. Heute ist Montag!";


    cout << "UserID:" <<auser.id <<endl;
    cout << "User Name:" <<auser.name << endl;
    cout << "Country" <<auser.country <<endl;
    cout << "Age of User:" <<auser.age<<endl;
    cout << "Greetings:" <<auser.greetings<<endl;

}
