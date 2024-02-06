//// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class access
{
private:
    int a;

public:
    int b = 5;

protected:
    int c = 20;
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
    test t;
    t.print();
    demo d;
    d.print();

    return 0;
}

