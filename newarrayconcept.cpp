#include <iostream>
using namespace std;

int main()
{
    int a[2] = {1,2};
    int *p;
    p = a; // a = &a[0]
    cout << "value 1 " << *p;
    p++;
    cout << "vlaue 2" << *p;

}