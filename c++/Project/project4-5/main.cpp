//Caelan Chapman pd 7
#include <iostream>

using namespace std;

int main()
{
    string x, y, z;

    cout << "enter the names of three colors. press return after each color." << endl;
    cout << "1. ";
    getline(cin, x);
    cout << "2. ";
    getline(cin, y);
    cout << "3. ";
    getline(cin, z);

    cout << x << '\t' << y << '\t' << z;

    return 0;
}
