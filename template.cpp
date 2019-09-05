#include <iostream>
using namespace std;

class sample
{
    public:
    template < typename t>
    void display(t a, t b)
    {
        cout << "you entered " << a << b << endl;
        cout << "the no. is integer ";
    }
    
    template < class s >
    void display(s c, s d, s e)
    {
        cout << c << d << e << "float type" << endl;
    }
};

int main()
{
    sample s1;
    s1.display(30, 20);
    s1.display(6.3, 5.3, 5.8);
}