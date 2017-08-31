//Caelan Chapman Step412
#include <iostream>

using namespace std;

int main()
{
    int quantity;
    string desc;

    cout << "enter quantity: ";
    cin >> quantity;
    cin.ignore(80, '\n');
    cout << "enter description: ";
    getline(cin, desc);
    cout << "you requested " << quantity << " " << desc;

    return 0;
}
