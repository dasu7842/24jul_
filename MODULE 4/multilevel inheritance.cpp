// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

class a
{
public:
    a()
    {
        cout << endl
             << "constructor of class a";
    }
};

class b : public a
{
public:
    b()
    {
        cout << endl
             << "constructor of class b";
    }
};

class c : public b
{
public:
    c()
    {
        cout << endl
             << "constructor of class c";
    }
};

int main()
{
    c c1;
    return 0;
}
