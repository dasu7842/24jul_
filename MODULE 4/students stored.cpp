// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
};

class test
{
public:
    int sub1, sub2;
};

class result : public student, public test
{
public:
    int total;

    int get_result()
    {
        cout << "Enter roll no : ";
        cin >> rollno;
        cout << "Enter Mark of subject 1 : ";
        cin >> sub1;
        cout << "Enter Mark of subject 2 : ";
        cin >> sub2;
    }

    int print_result()
    {
        cout << endl
             << "Roll No. : " << rollno;
        cout << endl
             << "Mark of Subject 1 : " << sub1;
        cout << endl
             << "Mark of subject 2 : " << sub2;
        total = sub1 + sub2;
        cout << endl
             << "Total Marks : " << total;
    }
};

int main()
{
    result res;
    res.get_result();
    res.print_result();
    return 0;
}
