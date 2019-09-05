#include <iostream>
using namespace std;

class overload
{
    private:
    int hr, min, sec;
    public: 
    friend void operator >> (istream &, overload &);
    friend void operator << (ostream &, overload &);

};

void operator >> (istream &in, overload &data)
{
    cout << "enter your data: ";
    in >> data.hr >> data.min >> data.sec;
    
}

void operator << (ostream &out, overload &data)
{
    out << "you entered: " << data.hr << data.min << data.sec;
    
}

int main()
{
    overload p;
    cin >> p;
    cout << p;
}