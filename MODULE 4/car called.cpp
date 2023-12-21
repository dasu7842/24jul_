// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include <iostream>
using namespace std;

class car
{
    char company[50], model[50];
    int year;

public:
    int get()
    {
        cout << "Enter car company name : ";
        cin >> company;
        cout << "Enter Model name : ";
        cin >> model;
        cout << "Enter year of launch : ";
        cin >> year;
    }

    int set()
    {
        cout << endl
             << "Car company Name : " << company;
        cout << endl
             << "Model name : " << model;
        cout << endl
             << "Year of Launch : " << year;
    }
};

int main()
{
    car ca;
    ca.get();
    ca.set();
}
