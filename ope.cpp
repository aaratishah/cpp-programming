#include <iostream>
using namespace std;

class complex
{
    private:
        int a, b;
    public:
        complex()
        {
            a=0;
            b=0;
        }
        void setData(int x, int y)
        {
            a=x;
            b=y;
        }

        void operator - () //unary minus
        {
            a = -a;
            b = -b;
        }

        complex operator * (complex c)
        {
            complex temp;
            {
                temp.a = a * (c.a); 
                temp.b = b * (c.b);
                return temp;
            }
        }

        complex operator - (complex c)
        {
            complex temp;
            temp.a = a - c.a;
            temp.b = b - c.b;
            return temp;
        }

        complex operator + (complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }

        void operator += (int c)
        {
            a+=c;
            b+=c;

        }

        int operator == (complex c)
        {
            if (a==c.a && b==c.b)
            {
                cout << "TRUE" << endl;
            }
                
            else
            {
                cout << "FALSE" << endl;
            } 
            
        }

        int operator > (complex c)
        {
            if (a>c.a && b>c.b)
             {
                cout << "TRUE" << endl;
            }
                
            else
            {
                cout << "FALSE" << endl;
            } 

        }

        int operator != (complex c)
        {
            if(a!=c.a && b!=c.b)
             {
                cout << "TRUE" << endl;;
            }
                
            else
            {
                cout << "FALSE" << endl;
            } 
        }

        complex operator ++ ()
        {
            complex temp;
            temp.a=++a;
            temp.b=++b;
            return temp;
        }

        complex operator ++(int)
        {
            complex temp;
            temp.a=a++;
            temp.b=b++;
            return temp;
        }

        void display()
        {
            cout << "value of a: " << a << "  value of b  " << b << endl; 
        }
};

main()
{
   complex c1,c2,c3,c4,c5,c6,c7;
   c1.setData(5,3);
   c2.setData(1,2);
   -c1;
   -c2;
   c1.display();
   c2.display();
   c3=c1*c2;
   c3.display();
   c4=c1+c2;
   c4.display();
   c5=c1-c2;
   c5.display();
   c1+=3;
   c1.display();
   c1==c2;
   c1>c2;
   c1!=c2;
   c6=++c1;
   c6.display();
   c7=c1++;
   c7.display();

} 