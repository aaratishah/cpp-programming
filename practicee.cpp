#include <iostream>
using namespace std;

class A
{
    protected:
    int x, y;
    public:
    void poly(int a,int b)
    {
        x=a;
        y=b;
    }
};

class B: public A
{
    public:
    float rect()
    {

        return(x*y);
    }
    
};

int main()
{
    float ar;
    B b;
    b.poly(2,3);
    ar = b.rect();
    cout << ar;
}