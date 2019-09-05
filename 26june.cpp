#include <iostream>
using namespace std;

class complex
{
    private:
    int x,y;

    public:
    void setdata()
    {
        x=0;
        y=0;
    }

    void getdata(int real, int img)
    {
        x=real;
        y=img;
    }

    friend complex sum(complex &, complex &);
    void showdata(complex c);
    
};

complex sum(complex & c1, complex & c2)
{
    complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}

void complex :: showdata(complex c)
{
    cout << c.x << " + " << c.y << "j" << endl;  
}

int main()
{
    complex X, Y, Z;
    X.getdata(20, 30);
    Y.getdata(30,40);
    Z = sum(X, Y);
    cout << "X is:" ;
     X.showdata(X);
    cout << "Y is:" ;
     Y.showdata(Y);
     cout << "Z is:" ;
     Z.showdata(Z);


}