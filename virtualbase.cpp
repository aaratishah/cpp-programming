//my characters inherited from my grandparents and my parents
#include <iostream>
using namespace std;

class grandparent
{
    protected:
    char colour[32];
    public:
    void gcharacter()
    {
        cout << "whats your grandparents face colour?" << endl;
        cin >> colour;
    }
    void out()
    {
        cout << "your face colour is: " << colour << endl;
    }
};

class Daddy : public virtual grandparent
{
    protected:
    float height;
    char faceshape[32];
    public:
    void dcharacter();
    void get();
};
    void Daddy :: get()
    {
        cout << "your height is: " << height << endl;
        cout << "your face shape is: " << faceshape << endl;
    }
    void Daddy :: dcharacter()
    {
        cout << "what's your daddy's height?" << endl;
        cin >> height;
        cout << "what's your daddy's face shape? " << endl;
        cin >> faceshape;
    }

class mummy : public virtual grandparent
{
    protected:
    char habit[32];
    public:
    void mcharacter()
    {
        cout << "how's your mom's habit? " << endl;
        cin >> habit;
        
    }

    void end()
    {
        
        cout << "your habit is: " << habit << endl;

    }
};

class me : public Daddy, public mummy
{
    private:
    public:
    void display()
    {
        
        cout << "characters of Aarati Shah: " << endl; 
    }
    void output()
    {
        gcharacter();
        dcharacter();
        mcharacter();
    }
};

int main()
{
    me obj;
    obj.output();
    obj.display();
    obj.out();
    obj.get();
    obj.end();
}


