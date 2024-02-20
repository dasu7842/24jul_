// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

class a  //class
{
public:  //function
    a()
    {
        cout << endl
             << "constructor of class a";
    }
};

class b : public a
{
public:  //function
    b()
    {
        cout << endl
             << "constructor of class b";
    }
};

class c : public b
{
public:  //function
    c()
    {
        cout << endl
             << "constructor of class c";
    }
};

int main()  //main function
{
    c c1;
    return 0;
}
