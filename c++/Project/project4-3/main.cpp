//Caelan Chapman pd 7
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "float a: ";
    cin >> a;
    cout << "float b: ";
    cin >> b;
    cout << "float c: ";
    cin >> c;

    cout.setf(ios::fixed);
    cout << setprecision(1) << setw(10) << a;
    cout << setprecision(1) << setw(10) << b;
    cout << setprecision(1) << setw(10) << c;

    return 0;
}
