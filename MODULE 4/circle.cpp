
//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.


#include <iostream>
using namespace std;

class circle
{
    int radius;

public:
    int area()
    {
        cout << "Enter radius of circle : ";
        cin >> radius;

        float area = 3.14 * radius * radius;

        cout << "Area of circle : " << area;
    }

    int circumference()
    {
        cout << endl
             << "Enter radius of circle : ";
        cin >> radius;

        float circumference = 2 * 3.14 * radius;

        cout << "circumference of circle : " << circumference;
    }
};

int main()
{
    circle cc;
    cc.area();
    cc.circumference();
    return 0;
}
