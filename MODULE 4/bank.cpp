#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class banking
{
        int acno;
        char nam[50], acctype[50];
        float bal;  
   public:
        banking(int acc_no, char *name, char *acc_type, float balance)  
        {
                acno=acc_no;
                strcpy(nam, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void banking::deposit()  
{
        int d1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>d1;
        bal+=d1;
}
void banking::withdraw()  
{
        int w1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>w1;
        if(w1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=w1;
}
void banking::display()  
{
       
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nam;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
  
        banking b1(acc_no, name, acc_type, balance);  //object 
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.display(); //
        return 0;
}
