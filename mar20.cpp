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
    Rectangle rect;
    Triangle tr;
    rect.readData(4, 2);
    tr.readData(5, 4);
    cout << "Area is:" << rect.Area() << endl;
    cout << "Triangle is:" << tr.Area() << endl;
    return 0;
}
