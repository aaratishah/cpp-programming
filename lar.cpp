#include <iostream>
using namespace std;
class largest
{
    int x,y;
    public:
    void read();
    void display();
    int large();

};

void largest::read()
{
    cout << "enter first number" << endl;
    cin >> x;
    cout << "enter secocnd number" << endl;
    cin >> y;

}

int largest::large()
{
    if(x>y)
    return x;
    else if(y>x)
    return y;
    else 
    return 0;
    
    
}

void largest::display()
{
    cout << "the largest value is:" << large() << endl;
}

int main()
{
    largest p;
    p.read();
    p.display();
    p.large();
}