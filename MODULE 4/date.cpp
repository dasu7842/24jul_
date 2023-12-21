// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>

using namespace std;

class date
{
    int day, month, year;

public:
    int get()
    {
        cout << "Enter a day : ";
        cin >> day;
        cout << "Enter a month : ";
        cin >> month;
        cout << "Enter a year : ";
        cin >> year;
    }

    int set()
    {
        cout << "Date : " << day << " - " << month << " - " << year;
    }

    int valid()
    {
        if (day < 1 || day > 31)
        {
            cout << "invalid input!!";
        }
        else if (month == 2)
        {
            if (year % 4 != 0 && day == 29)
            {
                cout << "This year is leap, February don't have 29 days.";
            }
        }
        else if (month < 1)
        {
            cout << "Please enter a month:";
        }
        else if (month > 12)
        {
            cout << "A year have only 12 months, so please enter month carefully";
        }
        else if (year < 1900 || year > 2100)
        {
            cout << "Please enter year :";
        }
        else
        {
            cout << "Date : " << day << " - " << month << " - " << year;
        }
    }
};

int main()
{
    date dt;
    dt.get();
    dt.valid();
}
