// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation

#include <iostream>
#include<string.h>
using namespace std;
//class
class student
{
    string name, address;
    char grade;
    int roll_no, std, sub_1, sub_2, sub_3, total;

public:
//input data from the user
    void get_data()
    {
        cout << "Enter Your Roll No. : ";
        cin >> roll_no;
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter Your address : ";
        cin >> address;
        cout << "Enter Your Std : ";
        cin >> std;
    }

    void call_grade()
    {
        cout << "Enter your mark of subject 1 : ";
        cin >> sub_1;
        cout << "Enter your mark of subject 2 : ";
        cin >> sub_2;
        cout << "Enter your mark of subject 3 : ";
        cin >> sub_3;

        total = sub_1 + sub_2 + sub_3;

        if (sub_1 > 100 || sub_2 > 100 || sub_3 > 100 || sub_1 < 0 || sub_2 < 0 || sub_3 < 0)
        {
            cout << "Please enter marks between 0 to 100";
        }
        else
        {

            if (total >= 250)
            {
                grade = 'A';
            }
            else if (total >= 200)
            {
                grade = 'B';
            }
            else if (total >= 150)
            {
                grade = 'C';
            }
            else if (total >= 100)
            {
                grade = 'D';
            }
            else
            {
                grade = 'F';
            }
        }
    }

    void print_data()
    //print the student's information
    {
        cout << endl
             << "Your roll no. : " << roll_no;
        cout << endl
             << "Your Name : " << name;
        cout << endl
             << "Your Address : " << address;
        cout << endl
             << "Your Standard : " << std;
        cout << endl
             << "Mark of subject 1 : " << sub_1;
        cout << endl
             << "Mark of subject 2 : " << sub_2;
        cout << endl
             << "Mark of subject 3 : " << sub_3;
        cout << endl
             << "Your Grade : " << grade;
    }
};

int main()  //main functon
{
    student st;  //object
    st.get_data();
    st.call_grade();
    st.print_data();
    
    return 0;
}
