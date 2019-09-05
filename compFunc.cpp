#include <iostream>
using namespace std;
int comp(int a,int b)
{
    if(a==b)
    cout<<"equal";

    if(a>b)
    cout<<"a is greater";

    if(b>a)
    cout<<"b is greater";

}






int main()
{
    cout<<"the first num is" <<"\n";
    int x{};
    cin>>x;
    cout<<"the second number is" <<"\n";
    int y{};
    cin>>y;
    int z{};
    z=comp(x,y);
    return z;

    
}