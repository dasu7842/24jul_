//// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class access //base class
{
private:
    int a; //private member

public:
    int b = 5; .//public member

protected:
    int c = 20; //protected member 
};

class test : public access
{
public:
    // member function
    void print()
    {
        cout << "Value of public specifier: " << b << endl;
    }
};

class demo : public access
{
public:
    void print()
    {
        cout << "Value of protected specifier: " << c << endl;
    }
};

int main()
{
    test t;  //object
    t.print();
    demo d;   //object
    d.print();

    return 0;
}

