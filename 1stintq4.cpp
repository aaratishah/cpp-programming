#include <iostream>
using namespace std;

class time 
{
    private:
    int hr,min,sec;
    public:
    time()
    {
        hr=0;
        min=0;
        sec=0;

    }

    time(int hour, int minute, int second)
    {
        hr=hour;
        min=minute;
        sec=second;
    }

    time operator + (time t1)
    {
        time temp;
        temp.hr = hr + t1.hr;
        temp.min = min + t1.min;
        temp.sec = sec + t1.sec;
        if(temp.sec>=60)
        {
            temp.sec = temp.sec%60;
            temp.min = temp.sec / 60 + temp.min;
        }

        if (temp.min>=60)
        {
            temp.min = temp.min%60;
            temp.hr = temp.min / 60 + temp.hr;
        }
        return temp;
    }

    time operator - (time t1)
    {
        time temp;
        temp.hr = hr - t1.hr;
        temp.min = min - t1.min;
        temp.sec = sec - t1.sec;
    
        if(temp.sec>=60)
        {
            temp.sec = temp.sec%60;
            temp.min = temp.sec / 60 + temp.min;
        }

        if (temp.min>=60)
        {
            temp.min = temp.min%60;
            temp.hr = temp.min / 60 + temp.hr;
        }
        return temp;
    }

    time operator++()
    {
         time temp;
        temp.hr=++temp.hr;
        temp.sec=++temp.sec;
        temp.min=++temp.min;
        return temp;
    }

    time operator--()
    {
         time temp;
         temp.hr=--temp.hr;
         temp.sec=--temp.sec;
         temp.min=--temp.min;
         return temp;
    }

    void display()
    {
        cout << hr << " : " << min << " : " << sec << endl;
     }
};

int main()
{
     time t(45, 67, 78), t2(34, 56, 56), t3, t4, t5, t6;
     t3 = t+t2;
     t4 = t-t2;
     t5 = ++t;
     t6 = --t2;
     t3.display();
     t4.display();
     t5.display();
     t6.display();
     return 0;


     

}