// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class accesses
{
private:
    int x; 

public:
    int y;

protected:
    int z;
};

class test : public accesses
{
public:
    void print()
    {
        cout << "y: I'm Public Property.";
    }
};

class demo : virtual accesses
{
public:
    void print()
    {
        cout << endl
             << "z : I'm Protected property.";
    }
};

int main()
{
    test tt;
    tt.print();
    demo dd;
    dd.print();
}
