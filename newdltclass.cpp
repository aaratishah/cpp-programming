#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "ammu" << endl;
    }

};

int main()
{
    A *p;
    p = new A;
    delete p;
    cout << "after delete: " << p;
    return 0;
}