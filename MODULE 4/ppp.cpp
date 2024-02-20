// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;  //library file

class accesses  //class
{
private:
    int x;   // private varible

public:
    int y;  //varible

protected:
    int z; //protected member varible
};

//derived class
class test : public accesses
{
public:
    void print()
    {
        cout << "y: I'm Public Property.";  //to print
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

int main()  //main function
{
    test tt;  //object
    tt.print();
    demo dd;   //object
    dd.print();
}
