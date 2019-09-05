#include <iostream>
int main()
{
    std::cout<<"enter first number:" <<"\n";
    int x{};
    std::cin>>x;
    std::cout<<"enter second number: " <<"\n";
    int y{};
    std::cin>>y;
    
    if(x==y)
    std::cout<<x <<"=" <<y <<"\n";

    if(x<y)
    std::cout<<y <<" is greater" <<"\n";

    if(x>y)
    std::cout<<x <<" is greater" <<"\n";

    return 0;
}