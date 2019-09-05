#include <iostream>
using namespace std;
template < class T >
void printarray(T a)
{
    T i,n,m[5.0],j;
    cout << "how many numbers do you want to enter"<< endl;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> m[i];
        
    }
    for(i=0;i<n;i++)
    {
        cout << m[i];
    }
}
int main()
{
    printarray(5);
    printarray(5.4);
}