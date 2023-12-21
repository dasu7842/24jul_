// Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>
#include<string.h>

using namespace std;

class cricketer
{
public:
    string name, team;
    void get_data()
    {
        cout << "Enter Batsman name : ";
        cin >> name;
        cout << "Enter Team : ";
        cin >> team;
    }
};

class batsman : public cricketer
{
public:
    int total_run, total_match, avg_run, best_perform;

    int get_details()
    {
        cout << "Enter Total run of Batsman : ";
        cin >> total_run;
        cout << "Enter Total Match of Batsman : ";
        cin >> total_match;
        cout << "High score : ";
        cin >> best_perform;
    }

    int avg()
    {
        avg_run = total_run / total_match;
        return 0;
    }

    int print_details()
    {
        cout << endl
             << "Batsman Name : " << name;
        cout << endl
             << "Team Name : " << team;
        cout << endl
             << "Total Runs : " << total_run;
        cout << endl
             << "Best Performance : " << best_perform;
        cout << endl
             << "Average Runs : " << avg_run;
    }
};

int main()
{
    batsman ai;
    ai.get_data();
    ai.get_details();
    ai.avg();
    ai.print_details();
    return 0;
}
