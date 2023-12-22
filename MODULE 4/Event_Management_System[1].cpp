// Event Management System

#include <iostream>
using namespace std;

class EMSDetails
{
public:
    string NameOfEvent, NameOfHandler;
    int NumberOfGuest, NumberOfMinutes;

    void event_details()
    {
        cout << "************* Event Management System *************" << endl;
        cout << endl
             << "Enter the name of Event : ";
        cin >> NameOfEvent;
        cout << "Enter the customer's first and last name : ";
        cin >> NameOfHandler;
        cout << "Enter the number of guests : ";
        cin >> NumberOfGuest;

        cout << "Enter the number of minutes in the event : ";
        cin >> NumberOfMinutes;
    }
};

class EMSEstimate : public EMSDetails
{
public:
    double CostPerHour = 18.50;
    double CostPerMinute = 0.40;
    double CostOfDinner = 20.70;
    int NumberOfServers;
    int Cost1, Cost2, CostOfOneServer;
    int TotalFoodCost;
    int AverageCost;
    int TotalCost;
    int DepositAmount;

    int servers()
    {
        NumberOfServers = NumberOfGuest / 20;
    }

    int cost_of_server()
    {
        Cost1 = (NumberOfMinutes / 60) * CostPerHour;
        Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
        CostOfOneServer = Cost1 + Cost2;
    }

    int food_cost()
    {
        TotalFoodCost = NumberOfGuest * CostOfDinner;
    }

    int avg_cost()
    {
        AverageCost = TotalFoodCost / NumberOfGuest;
    }

    int total_cost()
    {
        TotalCost = TotalFoodCost + (CostOfOneServer * NumberOfServers);
    }

    int deposite_cost()
    {
        DepositAmount = TotalCost * 0.25;
    }
};

class EMSEstimatePrint : public EMSEstimate
{
public:
    void print_details()
    {
        cout << endl
             << "============== Event Estimate for : " << NameOfHandler << " =================";
        cout << endl
             << "Number of Servers : " << NumberOfServers;
        cout << endl
             << "The Cost for Servers : " << CostOfOneServer;
        cout << endl
             << "The Cost for Food is : " << TotalFoodCost;
        cout << endl
             << "Average Cost Per Person : " << AverageCost;

        cout << endl
             << endl
             << "Total Cost is : " << TotalCost;
        cout << endl
             << "Please Deposite a 25% deposit to reserve the event";
        cout << endl
             << "The deposite needed is : " << DepositAmount;
    }
};

int main()
{
    EMSEstimatePrint ems;
    ems.event_details();
    ems.servers();
    ems.cost_of_server();
    ems.food_cost();
    ems.avg_cost();
    ems.total_cost();
    ems.deposite_cost();
    ems.print_details();
    return 0;
}
