#include <iostream>
using namespace std;
#define SIZE 32
int ammu(int a,int b)
{
    return(a+b);
}

int main()
{
    int x{};
    cin>>x;
    int y{};
    cin>>y;
    cout << SIZE + ammu(x,y);
}