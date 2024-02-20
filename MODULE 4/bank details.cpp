// Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include <iostream>

using namespace std;

class bank_account  //class
{
    int acc_no, balance, deposite_amt, withdraw_amt;  //varible

public:
        //function
    int 
    get_data()
    {
        cout << "Enter Account Number : ";
        cin >> acc_no;
        cout << "Enter amount : ";
        cin >> balance;
    }

    int deposite()  //function to deposite money
    {
        cout << "Enter amount you want to diposite : ";
        cin >> deposite_amt;
        balance = balance + deposite_amt;
    }

    int withdraw()   //function to withdrawal money
    {
        cout << "Enter amount you want to withdraw : ";
        cin >> withdraw_amt;
        if (withdraw_amt > balance)
        {
            cout << "You have no Money as much as you want to withdraw";
        }
        else
        {
            balance = balance - withdraw_amt;
        }
    }
};

int main()  //function
{
    int choice;
    bank_account bank_acc;
    bank_acc.get_data();
    cout << "What you want to do : " << endl
         << "1. Deposite" << endl
         << "2. Withdraw : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        bank_acc.deposite();
        break;

    case 2:
        bank_acc.withdraw();
        break;

    default:
        cout << "Invalid Choice";
        break;
    }
}
