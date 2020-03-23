#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
        string kind;
        string name;
        int age;
        Animal();
        string showName(void);
        void Spark(void) {
            string _kind = kind;
            if(kind =="cat") {
                std::cout << "Meo, meo";
            }else if (kind == "dog" ) {
                std::cout << "Wang ~~ wang ~~~";
            }
           // switch(_kind) {
           //     case "cat":
           //         std::cout << "Meo, meo";
           //         break;
           //     case "dog":
           //         std::cout << "Wang~~ Wang~~~";
           //         break;
           //     default:
           //         std::cout <<"invalid kind";
           // }
        };
};

Animal::Animal(void ) {
    cout << "object(instances) created" <<endl;
}

string Animal::showName(void) {
    return kind;
}

//void Animal::Spark(void) {
//    string _kind = kind;
//    if(kind =="cat") {
//        std::cout << "Meo, meo";
//    }else if (kind == "dog" ) {
//        std::cout << "Wang ~~ wang ~~~";
//    }
//   // switch(_kind) {
//   //     case "cat":
//   //         std::cout << "Meo, meo";
//   //         break;
//   //     case "dog":
//   //         std::cout << "Wang~~ Wang~~~";
//   //         break;
//   //     default:
//   //         std::cout <<"invalid kind";
//   // }
//};

int main() {


    Animal cat;
    Animal dog;

    cat.kind = "cat";
    cat.name = "Mow";
    cat.age = 1;
    dog.kind = "dog";
    dog.name = "Wang Wang";
    dog.age = 2;

    std::cout << "My Name is: "  <<cat.name << ", I am a " << cat.kind << " and  "<< cat.age << " years old"<< endl;
    cat.Spark();
    cout<<endl;

    std::cout << "My Name is: "  <<dog.name << ", I am a " << dog.kind << " and  "<< dog.age << " years old"<< endl;
    dog.Spark();
    cout<<endl;
    
}
