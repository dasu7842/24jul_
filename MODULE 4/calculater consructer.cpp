// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class addition  //class
{
public: // Constructor
    addition(float a, float b)
    {
        cout << endl
             << "Addtion : " << a + b;
    }
};
// Class for subtraction operation
class substraction 
{
public:
    substraction(float a, float b)
    {
        if (a < b)
        {
            cout << endl
                 << "Subtraction : " << b - a;
        }
        else
        {
            cout << endl
                 << "Subtraction : " << a - b;
        }
    }
};
// Class for multiplication operation
class multiplication
{
public:
    multiplication(float a, float b)
    {
        cout << endl
             << "Multiplication : " << a * b;
    }
};
// Class for division operation
class division
{
public:
    division(float a, float b)
    {
        cout << endl
             << "Division : " << a / b;
    }
};

int main()  //main function
{
    int n1, n2;
    cout << "Enter Number 1 : ";
    cin >> n1;
    cout << "Enter Nunmber 2 : ";
    cin >> n2;

    addition add(n1, n2);
    substraction sub(n1, n2);
    multiplication mul(n1, n2);
    division div(n1, n2);
    return 0;
}
