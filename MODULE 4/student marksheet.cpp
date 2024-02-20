// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include <iostream>
#include<string.h>
using namespace std;  //library file

class person  //class
{
public:  //function
    string name;
    int age;
};

//derived class
class student : public person
{
public:
    int sub_1, sub_2, sub_3, total;
    float per;

// Function to get student data   
int get_data()
    {
        cout << "Enter Student Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;

        cout << "Enter mark of subject 1 : ";
        cin >> sub_1;
        cout << "Enter mark of subject 2 : ";
        cin >> sub_2;
        cout << "Enter mark of subject 3 : ";
        cin >> sub_3;
    }

// Function to calculate percentage    
float percentage()
    {
        total = sub_1 + sub_2 + sub_3;
        per = total / 300;
    }

 // Function to display marksheet    
int marksheet()
    {
        cout << endl
             << "Student name : " << name;
        cout << endl
             << "Age : " << age;
        cout << endl
             << "Mark of subject 1 : " << sub_1;
        cout << endl
             << "Mark of subject 2 : " << sub_2;
        cout << endl
             << "Mark of subject 3 : " << sub_3;
        cout << endl
             << "Total : " << total;
        cout << endl
             << "Percentage : " << per;
    }
};
// Derived class
class teacher : public person
{
public:
    int salary;

    int get_data()
    {
        cout << "Enter Teacher Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Salary : ";
        cin >> salary;
    }

    int print_data()
    {
        cout << endl
             << "Teacher Name : " << name;
        cout << endl
             << "Age : " << age;
        cout << endl
             << "Salary : " << salary;
    }
};

int main()  //main function
{
    int choice;
    cout << "What you want to do : " << endl
         << "1. Marksheet" << endl
         << "2. Salary : ";
    cin >> choice;

    if (choice == 1)
    {
        student sd;  //object
        sd.get_data();
        sd.percentage();
        sd.marksheet();
    }
    else if (choice == 2)
    {
        teacher t;  //object
        t.get_data();
        t.print_data();
    }
    else
    {
        cout << "Invalid chocie";
    }
    return 0;
}
