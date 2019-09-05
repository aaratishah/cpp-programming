#include <iostream>
using namespace std;

class Time
{
    private:
    int hr,min,sec;

    public:
    Time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    Time(int h, int m, int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    friend Time operator+(Time &x, Time &y);
    friend Time operator+=(Time&x, Time&y);
    void operator=(Time&x);
    void display()
    {
        cout << "required time is " << hr << ":" << min << ":" << sec <<endl;
    }
};
void Time :: operator=(Time&x)
{
    hr=x.hr;
    min=x.min;
    sec=x.sec;
}

Time operator+=(Time &x, Time &y)
{
    x.hr+=y.hr;
    x.min+=y.min;
    x.sec+=y.sec;
    

}

Time operator+(Time &x, Time &y)
{
   Time temp;
   temp.hr = x.hr + y.hr;
   temp.min = x.min + y.min;
   temp.sec = x.sec + y.sec;
   if (temp.sec>=60)
   {
        temp.min=temp.min+temp.sec/60;
        temp.sec=temp.sec%60;
        if (temp.min>=60)
        {
            temp.hr=temp.hr+temp.min/60;
            temp.min=temp.min%60;
        }
   }
   return temp;
}

int main()
{
    Time t1(20,33,56), t2(34,45,55), t3, t4;
    t1(t2);
    t1.display();

    
    t1+=t2;
    t1.display();
    return 0;
}