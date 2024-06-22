#include <iostream>
using namespace std;


class ClassMath
{
    private:
    int a, b, c = 0;

    public:
     ClassMath(int val1, int val2, int val3){
        this->a = val1;
        this->b = val2;
        this->c = val3;

    }
    int SumMem(){
        int val1,val2,val3 = 0;
        val1 = this->a;
        val2 = this->b;
        val3 = this->c;

        int sum = val1 + val2 + val3;

        return sum;

    }
    int RazMem(){
        int val1, val2, val3 = 0;
        val1 = this->a;
        val2 = this->b;
        val3 = this->c;

        int raz = val1 - val2 - val3;

        return raz;
    }
};

int main()
{
    // ClassMath classMath(1,2,3);
    ClassMath classMath(1,2,3);


    int sum = classMath.SumMem();

    cout << "Sum : " << sum << endl;

    int raz = classMath.RazMem();

    cout << "Raz : " << raz << endl;

    return 0;   

}