#include <iostream>
using namespace std;

class complex
{
    float x;
    float y;
    public:
        complex()
        {}
        complex(float real, float imag)
        {
            x=real;
            y=imag;
        
        }

        complex operator + (complex);
        void display(complex c);
};

complex complex :: operator + (complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

void complex :: display(complex c)
{
    cout << c.x << " + " << c.y << " j " << endl;
}

int main()
{
    complex c1, c2, c3;
    c1 = complex (2.3, 4.3);
    c2 = complex (3.4, 6.5);
    c3 = c1 + c2;
    cout << "c1 = "; 
    c1.display(c1);
    cout << "c2 = "; 
    c2.display(c2);
    cout << "c3 = "; 
    c3.display(c3);
    return 0;
}