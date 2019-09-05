#include <iostream>
#include <string.h>
using namespace std;

class account
{
    protected:
    char name[32];
    char address[32];
    int acc_no;
};

class saving : public account
{
    public:
    int account_type;
    void assign(const char *nam, const char *add, int acc)
    {
        strcpy(name,nam);
        strcpy(address,add);
        acc_no=acc;
    }
};
class fixeds : public account
{
    public:
    int account_type;
    void assign(const char *nam, const char *add, int acc)
    {
        strcpy(name,nam);
        strcpy(address,add);
        acc_no=acc;
    }
};

int main()
{
    int c;
    saving s;
    fixeds f;
    cout << "enter 1 for saving and 2 for fixed";
    cin >> c;
    
    switch(c)
    {
        case 1:
        s.assign("rt", "dhulikhel", 1234);
        break;
        
        case 2:
        f.assign("rt", "dhulikhel", 1234);
        break;

        default:
        cout << "no any choices";

    }
}
