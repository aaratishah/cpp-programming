#include <iostream>
using namespace std;
class positive
{
    private:
        int x,sum=0;
    public:
        void read();
        
       
};

void positive::read()
{
    cout << "ten numbers are" << endl;
    
    for (x=1;x<=10;x++)
    {
       cout << x << endl;
    }
   
}


int main()
{
    positive p;
    p.read();
   
}