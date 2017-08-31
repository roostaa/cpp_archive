//Caelan Chapman Step47
#include <iostream>

using namespace std;

int main()
{
    float x = 24.0;

    cout << x << endl;

    cout.setf(ios::showpoint);
    cout << x << endl;

    cout.setf(ios::showpos);
    cout << x << endl;

    cout.setf(ios::scientific);
    cout << x << endl;

    cout.setf(ios::uppercase);
    cout << x << endl;

    cout.unsetf(ios::showpoint);
    cout << x << endl;

    cout.unsetf(ios::showpos);
    cout << x << endl;

    cout.unsetf(ios::uppercase);
    cout << x << endl;

    cout.unsetf(ios::scientific);
    cout << x << endl;

    return 0;
}
