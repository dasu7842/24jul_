// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Rectangle  // base class
{
public:
    int area, l, w;  //public memebers
};

class rect_area : public Rectangle  //derived class
{
public:
    //constucter
    rect_area()
    {
        cout << "Enter length of Rectangle : ";
        cin >> l;

        cout << "Enter Width of Rectangle : ";
        cin >> w;
    }

    void call_area() 
    {
        area = l * w;  //calcuate area
        cout << "Area of Rectangle : " << area;
    }
};

int main()
{
    rect_area aa;  //create object
    aa.call_area();
}
