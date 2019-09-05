#include <iostream>
using namespace std;
int sum(int x,int y)
{
    return (x+y);

}

int main()
{
    cout<<"the first is a";
    int a{};
    cin>>a;
    cout<<"the second is b:";
    int b{};
    cin>>b;
    cout<<"the sum of a and b is:" <<sum(a,b);
    return 0;
}