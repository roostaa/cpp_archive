//Caelan Chapman pd 7 1-4

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float cost; // beautiful declarations. why didnt they say to declare it all at the beginning now it's messy
    int length, i;
    string City = "Dillsburg";
    string address;

    City = "Grand Cancer";
    cout << City << endl;

    length = City.length();

    City += ", michelle obama";

    cin >> i; // doesnt ask to ask user

    cout << "A\tB\tC" << endl;

    cout.setf(ios::showpos);
    cout << setprecision(2) << cost << endl;
    getline(cin.ignore(), address); //koalaTea

    return 0;
}
