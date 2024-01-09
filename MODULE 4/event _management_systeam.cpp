#include <iostream>

using namespace std;

class EMSDetails {
public:
    string NameOfEvent, NameOfHandler;
    int NumberOfGuest, NumberOfMinutes;

    void eventDetails() {
        cout << "************* Event Management System *************" << endl;
        cout << endl << "Enter the name of Event : ";
        cin.ignore();
        getline(cin, NameOfEvent); 
        cout << "Enter the customer's first and last name : ";
        getline(cin, NameOfHandler);
        cout << "Enter the number of guests : ";
        cin >> NumberOfGuest;
        
        while (NumberOfGuest <= 0) {
            cout << "Number of guests should be greater than 0. Enter again: ";
            cin >> NumberOfGuest;
        }

        cout << "Enter the number of minutes in the event : ";
        cin >> NumberOfMinutes;

        while (NumberOfMinutes <= 0) {
            cout << "Number of minutes should be greater than 0. Enter again: ";
            cin >> NumberOfMinutes;
        }
    }
};

class EMSEstimate : public EMSDetails {
public:
    float CostPerHour;
    float CostPerMinute;
    float CostOfDinner;
    int NumberOfServers;
    int Cost1, Cost2, CostOfOneServer,TotalFoodCost,AverageCost,TotalCost,DepositAmount;
    

    int calculateServers() {
    	CostPerHour = 18.50;
    	CostPerMinute = 0.40;
    	CostOfDinner = 20.70;
        if (NumberOfGuest > 0) {
            NumberOfServers = NumberOfGuest / 20;
        } else {
            NumberOfServers = 0;
        }
        return 0;
    }

    int calculateCostOfServer() {
        if (NumberOfMinutes > 0) {
            Cost1 = (NumberOfMinutes / 60) * CostPerHour;
            Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
            CostOfOneServer = Cost1 + Cost2;
        } else {
            CostOfOneServer = 0;
        }
        return 0;
    }

    int calculateFoodCost() {
        TotalFoodCost = NumberOfGuest * CostOfDinner;
    return 0;
    }

    int calculateAvgCost() {
        AverageCost = (NumberOfGuest > 0) ? (TotalFoodCost / NumberOfGuest) : 0;
    return 0;
    }

    int calculateTotalCost() {
        TotalCost = TotalFoodCost + (CostOfOneServer * NumberOfServers);
    return 0;
    }

    int calculateDepositCost() {
        DepositAmount = (TotalCost > 0) ? (TotalCost * 0.25) : 0;
    return 0;
    }
};

class EMSEstimatePrint : public EMSEstimate {
public:
    void printDetails() {
        cout << endl << "============== Event Estimate for : " << NameOfHandler << " =================";
        cout << endl << "Number of Servers : " << NumberOfServers;
        cout << endl << "The Cost for Servers : " << CostOfOneServer;
        cout << endl << "The Cost for Food is : " << TotalFoodCost;
        cout << endl << "Average Cost Per Person : " << AverageCost;
        cout << endl << endl << "Total Cost is : " << TotalCost;
        cout << endl << "Please Deposit a 25% deposit to reserve the event";
        cout << endl << "The deposit needed is : " << DepositAmount;
    }
};

int main() {
    EMSEstimatePrint ems;
    ems.eventDetails();
    ems.calculateServers();
    ems.calculateCostOfServer();
    ems.calculateFoodCost();
    ems.calculateAvgCost();
    ems.calculateTotalCost();
    ems.calculateDepositCost();
    ems.printDetails();
    return 0;
}

