#include <iostream>
// // https://www.w3schools.com/cpp/
class MyClass{
    
    protected:
    int x = 10;
    
    public:
    void printData();
    void printX();

};

void MyClass::printData(){
    std::cout << "Hello" << "\n";
}

void MyClass::printX(){
    std::cout << "x = " << x << std::endl;
}

int main(){
    MyClass myClass;

    myClass.printData();
    myClass.printX();
}