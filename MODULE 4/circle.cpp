
//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.


#include <iostream>
using namespace std;

class circle
{
    int radius;

public:
        //function
    int area()
    {
        cout << "Enter radius of circle : ";
        cin >> radius;

        float area = 3.14 * radius * radius;

        cout << "Area of circle : " << area;
    }
      //function
    int circumference()
    {
        cout << endl
             << "Enter radius of circle : ";
        cin >> radius;

        float circumference = 2 * 3.14 * radius;  //// Calculate area of the circle

        cout << "circumference of circle : " << circumference;
    }
};

int main()
{
    circle cc;  //object
    cc.area();
    cc.circumference();
    return 0;
}
