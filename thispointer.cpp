#include <iostream>
using namespace std;
class Shape
{
    protected:
    int width, height;
    public:
    void readData(int a, int b)
    {
        width = a;
        height = b;
    }

    virtual int area()=0;
};

class Rectangle: public Shape
{
    public:
    int Area()
    {
        return (width * height);
    }
};

class Triangle: public Shape
{
    public:
    int Area()
    {
        return (width * height /2);
    }
};

int main()
{
    Shape *bptr;
    Rectangle r;
    bptr = &r;
    bptr -> readData(10,20);
    float ar;
    ar = bptr -> Area();
    cout << "area is: " << ar;

}
