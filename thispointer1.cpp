#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    public:
    int get()
    {
        cin>>a;
        return a;
    }
    
};
class B : public A
{
    int b;
    public:
    void show()
    {
        cin >> b;
        cout << get() + b;
    }
};

int main()
{
    B a;
    a.show();
}