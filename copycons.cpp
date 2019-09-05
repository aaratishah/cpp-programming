#include <iostream>
using namespace std;

class complex
{
    private:
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

    complex(complex&a)
    {
        x=a.x;
        y=a.y;
    }
    
   

    void display()
    {
        cout << "sum is:" << x + y << endl;
    }
    
};

int main()
{
    complex c1(10,20);
    complex c2(c1);
    c2.display();
}
