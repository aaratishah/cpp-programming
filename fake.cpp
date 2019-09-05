#include <iostream>
using namespace std;

class complex
{
    private:
    int x, y;

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

    friend complex operator+(complex &c);
    void display()
    {
        cout << x << " + " << y << "j"<< endl;
    }
};

complex operator+(complex &c)
{
    complex temp;
    temp.x = c.x;
    temp.y = c.y;
    return temp;
}

int main()
{
    complex z1(1,2), z2;
    z2=+z1;
    z2.display();
    return 0;

}