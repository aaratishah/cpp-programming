#include <iostream>
using namespace std;

class complex 
{
    private:
    static int count;
    public:
    complex()
    {
        count++;
        cout << "create the object" << count << endl;
    }

    ~complex()
    {
        cout << "now kill it" << count << endl;
        count--;
    }
};

int complex::count;

main()
{
    complex C1, C2, C3;
    cout << "now destructing in reverse order " << endl;
}