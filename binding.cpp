#include <iostream>

using namespace std;

class father
{
	public:
		virtual void sound()
		{
			cout << "This is ammu" << endl;
		}
};

class son : public father
{
	public:
		virtual void sound()
		{
			cout << "this is sano ammu" << endl;
		}
};

int main()
{
	father *a;
	son b;
	a = &b;
	a->sound();
	return 0;
}

