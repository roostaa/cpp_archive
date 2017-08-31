//Caelan Chapman Step411
#include <iostream>

using namespace std;

int main()
{
    string string1;
    string string2;

    cout << "enter first name: ";
    getline(cin, string1);

    cout << "enter last name: ";
    getline(cin, string2);

    cout << "your name is " << string1 << " " << string2 << "." << endl;

    return 0;
}
