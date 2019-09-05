#include <iostream>
#include <math.h>
using namespace std;

class axis
{
    private:
    int x1, y1, x2, y2;

    public:
    void dis();
};

void axis::dis()
{
    float d1;
    cout << "enter the coordinates of first quadrant" << endl;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << "the coordinates are: " << "(" << x1 << ", " << x2 << ")" << " , (" << y1 << ", " << y2 << ")" << endl;
    d1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout << "the distance between them: " << d1 << endl;
}

int main()
{
    axis p;
    p.dis();
}
