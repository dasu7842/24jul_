// Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std;

class maxno  //class
{
    int x, y;  //varible

public:  //function
    friend int fd(maxno &obj);
};

int fd(maxno &obj)
{
    cout << "Enter Value of x : ";
    cin >> obj.x;
    cout << "Enter Value of y : ";
    cin >> obj.y;

    if (obj.x > obj.y)
    {
        cout << "x is max";
    }
    else if (obj.x < obj.y)
    {
        cout << "y is max";
    }
    else if (obj.x == obj.y)
    {
        cout << "x and y both are same";
    }
}

int main()  //main function
{
    maxno oo;  //object
    fd(oo);
    return 0;
}
