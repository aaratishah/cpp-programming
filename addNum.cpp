#include <iostream>
int main()
{
	std::cout<<"enter first no.";
	int x{};
	std::cin>>x;
	std::cout<<"enter second no.";
	int y{};
	std::cin>>y;
	std::cout<<"entered numbers are:" <<x <<"and" <<y <<"\n" <<"the sum is" << x+y <<"\n";
	return 0;
}