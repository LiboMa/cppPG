#include <iostream>

class Box {
    public:
        double higth;
        Box() {
            std::cout << "object created" <<std::endl;
        };
    protected:
        double Width;
    private:
        double perimeter = 100;
};

// Derived  class
class SmallBox:Box {
    public:
        void setSmallBoxWidth(double wid);
        double getSmallBoxWidth(void);
};

double SmallBox::getSmallBoxWidth(void) {
   return Width;
};

void SmallBox::setSmallBoxWidth(double wid) {
    Width = wid;
}

int main () {
    SmallBox box;

    box.setSmallBoxWidth(5.0);
    std::cout << "Size of small box: "<<box.getSmallBoxWidth()<<std::endl;

    return 0;
}
