#include <iostream>
using namespace std;

class student
{
    protected:
    int roll;
    public:
    char name[32];
    void std()
    {
        cout << "enter your name and roll " << endl;
        cin >> name >> roll;
    }

    int getroll()
    {
        return roll;
    }
};

class info : public student
{
    protected:
    float sub1, sub2;
    public:
    void subject()
    {
        getroll();
        cout << "enter your marks in 2 subjects: " << endl;
        cin >> sub1 >> sub2;
    }

};

class result : public info
{
    protected:
    float result;
    public:
    void display()
        {
            result = (sub1 + sub2)/2;
            if(result>=50)
            {
                cout << "name: " << name << endl << "roll no. " << getroll() << endl << "obtained marks = " << result << endl << "status: " << "pass" << endl; 
            }

            if(result<50)
            {
             cout << "name: " << name << endl << "roll no. " << getroll() << endl << "obtained marks = " << result << endl << "status: " << "fail, better luck next time " << endl;   
            }
        }
    

};

int main()
{
    result obj;
    obj.std();
    obj.subject();
    obj.display();

}