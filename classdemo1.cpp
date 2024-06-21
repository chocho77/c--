#include <iostream>
using namespace std;

class MyClass
{
    private:
    int x, y;

    public:
    void setX(int val)
    {
        this->x = val;

    }

    int getX()
    {
        return this->x;
    }
};

int main()
{
    MyClass myClass;
   
    myClass.setX(5);
    int num;
    num = myClass.getX();
    cout << "num = " << num << endl;
    return 0;
}
