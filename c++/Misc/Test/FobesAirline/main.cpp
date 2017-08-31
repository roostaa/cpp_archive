#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string first, last; // mmh strings make names
    float charge, total, flightDeviation, time; // money variables/time
    int passengers; // only integer

    cout << "welcome to fobes airlines please dont come here again\n" << endl; //friendly greeting
    cout << "Enter the following information below:\n" << endl;
    cout << "first name: ";
    cin >> first;
    cout << "last name: ";
    cin >> last;
    cout << "cost per ticket? $";
    cin >> charge;
    cout << "how many passengers attended the flight? (hint: less than or equal to 143) ";
    cin >> passengers;
    cout << "How long was the flight in hours? ";
    cin >> time;

    cout << '\n' << "Employee Name: " << first << setw(10) << last << endl;
    total = charge * passengers; // finds ticket revenue
    cout.setf(ios::fixed);
    cout << "Total Ticket Fares: $" << setprecision(2)  << total << endl;
    flightDeviation = total - (3958.00*time); // calculates cost of flight itself
    cout << "Deviation from standard cost: $" << flightDeviation << " (positive = profit)" << endl; // positive = profit


}
