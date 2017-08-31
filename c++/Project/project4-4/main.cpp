//Caelan Chapman pd 7
#include <iostream>

using namespace std;

int main()
{
    string a, b, c, d, e, f, g;

    cout << "last name: ";
    getline(cin, a);
    cout << "first name: ";
    getline(cin, b);
    cout << "address: ";
    getline(cin, c);
    cout << "city: ";
    getline(cin, d);
    cout << "state: ";
    getline(cin, e);
    cout << "zip: ";
    getline(cin, f);
    cout << "phone: ";
    getline(cin, g);

    cout << a << ", " << b << endl;
    cout << c << endl;
    cout << d << ", " << e << " " << f << endl;
    cout << g << endl;

    return 0;
}
