#include <iostream>
int add(int x,int y)
{
    return (x+y);

}

int main()
{
    std::cout<<"the first no is:" <<'\n';
    int a{};
    std::cin>>a;
    std::cout<<"the second number is:" <<'\n';
    int b{};
    std::cin>>b;
    int c{};
    c=add(a,b);
    std::cout<<"the sum is:" <<c <<"\n";
    return c;

}