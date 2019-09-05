#include <iostream>
using namespace std;

class academic
{
    protected:
    
    float marks, sum=0;
     int i;
    public:
     char name[32];
    float mark()
    {
       
        cout << "enter your name: " << endl;
        cin >> name;
        cout << "enter marks in five subject: " << endl;
        for( i=1; i<=5;i++)
        {
            cin >> marks;
            sum = sum + marks;

        }
        return sum;
        
    }
};

class ECA
{
    protected:
    float sports, sing, dance;
    public:
    void input()
    {
        cout << "enter your marks in sports, singing, and dancing " << endl;
        cin >> sports >> sing >> dance;
    }
};

class result : public academic, public ECA
{
    protected:
    float total;
    public:
        
        void output()
        {
            total = sum + sports + sing + dance;
            if(total>=90)
            {
            cout << "name: " << name << endl << "status: " << "pass" << endl;
            }
            else 
            {
            cout << "name: " << name << endl << "status: " << "fail" << endl;
            }
             
        }
    
};

int main()
{
    result obj;
    obj.mark();
    obj.input();
    obj.output();
}