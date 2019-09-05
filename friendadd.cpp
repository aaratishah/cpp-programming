#include <iostream>
using namespace std;

class complex
{
    private:
    int a,b;

    public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int real, int img)
    {
        a=real;
        b=img;
    }
    friend complex operator+(complex &, complex &);
    void display()
    {
        cout << "real: " << a << "img: " << b << endl;
    }
};

complex  operator+(complex &x, complex &y)
{
   complex temp;
   temp.a = x.a + y.a;
   temp.b = x.b + y.b;
   return temp;
}

int main()
{
    complex c1(2,3), c2(3,4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}