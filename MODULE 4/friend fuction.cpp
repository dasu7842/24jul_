// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;

class swaping
{
    int x, y;

public:
    friend int swp_no(swaping &obj);
};

int swp_no(swaping &obj)
{
    cout << "Enter number 1 : ";
    cin >> obj.x;
    cout << "Enter number 2 : ";
    cin >> obj.y;
    obj.x = obj.x + obj.y; 
    obj.y = obj.x - obj.y; 
    obj.x = obj.x - obj.y; 

    cout << "After swaping";
    cout << endl
         << "Number 1 : " << obj.x;
    cout << endl
         << "Number 2 : " << obj.y;
}

int main()
{
    swaping g1;
    swp_no(g1);
    return 0;
}
