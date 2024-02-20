// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;  //library file

class triangle  //class
{
    int s1, s2, s3;//varibles for side

public:
  //function
    int check_triangle(int a, int b, int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;
        if (s1 == s2 && s2 == s3 && s3 == s1)
        {
            cout << "Triangle is equilateral.";
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            cout << "Triangle is isosceles.";
        }
        else
        {
            cout << "Triangle is scalene.";
        }
    }
};

int main()  //main function
{
    int sideA, sideB, sideC;  //varible
    cout << "Enter Side A : ";
    cin >> sideA;
    cout << "Enter Side B : ";
    cin >> sideB;
    cout << "Enter Side C : ";
    cin >> sideC;

    triangle t;  //object

    t.check_triangle(sideA, sideB, sideC);
}
