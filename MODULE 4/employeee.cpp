// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor

#include <iostream>
#include<string.h>
using namespace std;

class employee  //class
{   //private member varible
    string name;  
    int emp_id, salary, performance;

public:
        //Constructor
    employee()
    {
        cout << "Enter Employee id : ";
        cin >> emp_id;

        cout << "Enter Employee Name : ";
        cin >> name;

        cout << "Enter Performance : ";
        cin >> performance;

        if (performance >= 70)
        {
            salary = 500000;
        }
        else if (performance >= 60)
        {
            salary = 200000;
        }
        else if (performance >= 50)
        {
            salary = 100000;
        }
        else if (performance >= 40)
        {
            salary = 50000;
        }
        else
        {
            salary = 30000;
        }
    }

    int print()  // Function to print employee details
    {
        cout << endl
             << "Employee ID : " << emp_id;
        cout << endl
             << "Employee Name : " << name;
        cout << endl
             << "Salary : " << salary;
    }
};

int main()
{
    employee dd;  //object
    dd.print();
}
