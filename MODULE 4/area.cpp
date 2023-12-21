// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int area, l, w;
};

class rect_area : public Rectangle
{
public:
    rect_area()
    {
        cout << "Enter length of Rectangle : ";
        cin >> l;

        cout << "Enter Width of Rectangle : ";
        cin >> w;
    }

    void call_area()
    {
        area = l * w;
        cout << "Area of Rectangle : " << area;
    }
};

int main()
{
    rect_area aa;
    aa.call_area();
}
