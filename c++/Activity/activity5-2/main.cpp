//Caelan Chapman PD 7 Activity 5-2

#include <iostream>

using namespace std;

int main()
{
    int integer;

    cout << "Gimme an integer: ";
    cin >> integer;

    if ((integer % 2) == 0)
    {
        cout << "It's even.";
    }
    else
    {
        cout << "It's odd.";
    }
    return 0;
}
