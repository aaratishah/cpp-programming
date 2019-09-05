#include <iostream>
using namespace std;
int main()
{
    string s1,s2,s3;
    cout<<"enter first string";
    getline(cin, s1);

    cout << "enter secong string";
    getline(cin, s2);

    s3 = s1+ s2;
    cout << "result is: " << s3;


}