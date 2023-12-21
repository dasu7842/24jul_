// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>
using namespace std; 

class person
{
    
    char name[50], country[100];
    int age;

public:
    
    int get()
    {
        cout << "Enter Your name : ";
        cin >> name;
        cout << "Enter your age : ";
        cin >> age;
        cout << "Enter Your country : ";
        cin >> country;
    }


    int set()
    {
        cout << endl
             << "Your name : " << name;
        cout << endl
             << "Your age : " << age;
        cout << endl
             << "Your country : " << country;
    }
};

int main()
{
    person ps; 
    ps.get();  
    ps.set();
}
