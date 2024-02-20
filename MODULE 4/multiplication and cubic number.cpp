// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;  //library file

class values  //class
{
public:  //function
    inline int multiplication(int x, int y)
    {
        return x * y;
    }

    inline int cubic(int x)
    {
        return x * x * x;
    }
};

int main()  //main function
{
    int number1, number2;  //varible
    cout << "Enter value of number1 : ";  //to print
    cin >> number1;

    cout << "Enter value of number2 : ";
    cin >> number2;

    values dd;

    cout << "Multiplication : " << dd.multiplication(number1, number2);
    cout << endl
         << "Cube : " << dd.cubic(number1);
}
