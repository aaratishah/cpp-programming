#include <iostream>
using namespace std;

void linear(int &x, int &y, int m, int n, int a, int b, int c, int d)
{
    
    cout << "enter the values" << endl;
    cin >> m >> n >> a >> b >> c >> d;
    x=(m*d-b*n)/(a*d-c*b);
    y=(n*a-m*c)/(a*d-c*b);


}

int main()
{
    int data1, data2, data3, data4, data5, data6, data7, data8;
    linear(data1, data2, data3, data4, data5, data6, data7, data8);
    cout << "value of x and y are: " << data1 << ", " << data2 << endl;
    return 0;
    

}


