#include <iostream>
using namespace std;

class complex
{
    int x,y;
    public:
    complex()
    {
        x=0;
        y=0;
    }
    complex(int a, int b)
    {
        x=a;
        y=b;
    }

    friend complex operator-(complex&);
    void display()
    {
        cout << "the value of x and y is:" << x << "  " << y << endl;
    }
};

complex operator-(complex&c1)
{
    complex temp;
    temp.x=-c1.x;
    temp.y=-c1.y;
    return temp;
}

int main()
{
    complex c(1,2),c2;
    c2=-c;
    c.display();
    c2.display();

}

