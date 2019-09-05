//single inheritance : private
#include <iostream>
using namespace std;

class student
{
    private:
    int roll;
    
    public:
    char address[32];
    char name[30];

    int accessroll()
    {
        return roll;

    }

   

    void input()
    {
        cout << "enter your data: " <<endl;
        cin >> name >> address >> roll >> college;
    }

};

class info : private student
{
    private:
    int symbol;
    char branch[32];
    public:
    void in()
    {
        cout << "enter your symbol no. and branch " << endl;
        cin >> symbol >> branch;
    }
    void display()
    {
        input();

        cout << "name is: " << name << endl << "roll no." << accessroll() << endl << "address: " << address << endl << "symbol no." << symbol << endl << "branch: " << branch << endl;
    }
};

int main()
{
    info obj;
    obj.in();
    obj.display();
    
    return 0;
}