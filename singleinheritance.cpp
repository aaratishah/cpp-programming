#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    public:
    int b;
    void getdata()
    {
        cout << "enter the value of a and b: " << endl;
        cin >> a >> b;

    }

    int accessdata()
    {
        return a;
    }
};

class B : public A
{
    private:
    int mul;

    public:
    void mult()
    {
        mul=b*accessdata();
    }

    void display()
    {
        cout << "the result is: " << mul << endl;
    }
};

int main()
{
    B obj;
    obj.getdata();
    obj.mult();
    obj.display();
    return 0;
}