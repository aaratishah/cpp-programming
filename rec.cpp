#include <iostream>
using namespace std;

class rectangle
{
    private:
    int l,b;
    
    public:
    void setSize(int length, int breadth);
    int getArea();
    int getPerimeter();

};

void rectangle::setSize(int length, int breadth)
{
    l=length;
    b=breadth;
    
}

int rectangle::getArea()
{
    return (l*b);
}

int rectangle::getPerimeter()
{
    return (2*(l+b)); 
}

int main()
{
    rectangle r1;
    r1.setSize(10,15);
    cout << "the area is: " << r1.getArea() << endl;
    cout << "the perimeter is: " << r1.getPerimeter() << endl;
}

