// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

class values
{
public:
    inline int multiplication(int x, int y)
    {
        return x * y;
    }

    inline int cubic(int x)
    {
        return x * x * x;
    }
};

int main()
{
    int number1, number2;
    cout << "Enter value of number1 : ";
    cin >> number1;

    cout << "Enter value of number2 : ";
    cin >> number2;

    values dd;

    cout << "Multiplication : " << dd.multiplication(number1, number2);
    cout << endl
         << "Cube : " << dd.cubic(number1);
}
