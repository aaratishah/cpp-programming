#include <iostream>
using namespace std;
class box
{
    static int count;
    public:
        static int GetCount()
        {
            return count;
        }

        static int IncreaseCount()
        {
            count++;
        }
};

int box::count;
main()
{
    cout << "initially value of count:" << box::GetCount() << endl;
    box b1,b2,b3;
    box::IncreaseCount();
    box::IncreaseCount();
    box::IncreaseCount();
    cout << "finally value of count:" << box::GetCount() << endl; 
}