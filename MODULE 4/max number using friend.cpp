/*.Write a program to find the max number from given two numbers
using friend function*/
#include <iostream>
using namespace std;

class MaxFinder //class
{  
private:
    int num1, num2;  varible
public:
        //Constructor
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    friend int findMax(MaxFinder mf);
};

int findMax(MaxFinder mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main()  //main function
{
    int a, b;  //varible
    cout << "Enter two numbers: ";
    cin >> a >> b;
    MaxFinder mf(a, b);
    cout << "Maximum number is: " << findMax(mf) << endl;  //calling friend function
    return 0;
}

