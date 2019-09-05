#include <iostream>
using namespace std;

class inexope
{
    private:
    int a;

    public:

    void display()
    {
        cout << "enter your data" << endl;
    }
    friend istream & operator >> (istream & input, inexope & obj);
    friend ostream & operator << (ostream & output, inexope & obj);

};

istream & operator >> (istream & input, inexope & obj)
{
    input >> obj.a; //cin >> obj.x;
    return input;
}

ostream & operator << (ostream & output, inexope & obj)
{
    output  << "your data is: " << obj.a; //cout << obj.x;
    return output;
}


int main()
{
    inexope x;
    x.display();
    cin >> x; // operator.>>(cin,x);
    cout << x;// operator.<<(cout,x);
    return 0;
}

