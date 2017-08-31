//Caelan Chapman pd 7
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, product, dop;

    cout << "give me two float numbers. press enter after each one." << endl;
    cin >> a;
    cin >> b;

    product = a * b;

    cout << "product of two floats: " << product << endl;
    cout << "how many digits of precision do you want? ";
    cin >> dop;
    cout.setf(ios::fixed);
    cout << setprecision(dop) << product << endl;

    return 0;
}
