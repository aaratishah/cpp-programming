#include<iostream>
using namespace std;
class book{
    private:
    static int cn;
    char name{15};
    int id;
    public:
    void readdata()
    {
        cout<<endl<<"enter id:";
        cin>>id;
        cout<<"enter name of book: ";
        cin>>name;
        cn++;
    }

    void display()
    {
        cout<<endl<<id<<"  "<<name << endl;
    }

    void displaycount()
    {
        cout<<"the number of objects called from readdata(): "<<cn;
    }
   
};

 int book::cn;

int main()
 {
     book b1,b2,b3;
     b1.readdata();
     b1.displaycount();

     b2.readdata();
    b2.displaycount();

    b3.readdata();
     b3.displaycount();

     cout<<endl<<"ID \n"<<"Name: " << "aarati";
     


     b1.display();
      b2.display();
       b3.display();
       }