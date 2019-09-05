#include <iostream>
using namespace std;

class space
{
    int x;
    int y;
    int z;

    public:
        void getData(int a, int b, int c);
        void display();
        void operator-();  //overload unary minus
};

void space :: getData (int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}

void space :: display()
{
    cout << x << " ";
    cout << y << " ";
    cout << z << "\n";
}

void space :: operator-()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    space s;
    s.getData(1,-4,3);
    cout << "S:  ";
    s.display();

    -s;  //activates operator-() function

    cout << "S:  ";
    s.display();
    return 0;


}