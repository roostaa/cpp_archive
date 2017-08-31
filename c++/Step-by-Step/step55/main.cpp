//Caelan Chapman pd 7 5-5

#include <iostream>

using namespace std;

int main()
{
    string city_name;
    unsigned long population;

    cout << "Name of town? ";
    getline(cin, city_name);

    cout << "Population? ";
    cin >> population;
    cin.ignore(80, '\n');

    if (population >= 185086){
        cout << "mmmmh cookies. " << city_name << " is one of the biggest 100 cities";
    }
        else{
        cout << city_name << "isnt largest 100 cities \n";
    }
}
