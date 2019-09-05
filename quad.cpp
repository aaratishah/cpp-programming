#include <iostream>
#include <math.h>
using namespace std;
class quad
{
    private:
        double a,b,c,x1,x2;
    public:
        void read();
        void display();
        void check();

};

void quad::read()
{
    cout << "enter the coefficient of x^2" << endl;
    cin >> a;
    cout << "enter the coefficient of x" << endl;
    cin >> b;
    cout << "enter the coefficient of c" << endl;
    cin >> c;
}

void quad::display()
{
    x1= (-b+ sqrt(pow(b,2)-4*a*c))/(2*a);
    x2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout << "the vlaue of x is:" << x1 << endl;
    cout << "the value of y is:" << x2 <<endl;
}

void quad::check()
{
    if((pow(b,2)-4*a*c)>0)
    {
        cout << "real root" << endl;

    }
    else if((pow(b,2)-4*a*c)<0)
    {
        cout << "imaginary root" <<endl;
    }
    else
    {
        cout << "real and equal root" << endl;
    }


}

int main()
{
    quad p;
    p.read();
    p.check();
    p.display();
}