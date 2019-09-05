#include <iostream>
using namespace std;

void readdata(int x[10])
{
    int i;
    for (i=0;i<10;i++)
    {
        cin >> x[i];
    }
}

int main()
{
    int size=10, array[size],large, i;
    cout << "enter ten positive numbers " << endl;
    readdata (array,10);
    large=array[0];
    for (i=1;i<10;i++)
    {
        if (large<array[i])
        {
            large=array[i];
        }
    } 

    cout << "the largest of all is:" << large << endl;
    return 0;
}