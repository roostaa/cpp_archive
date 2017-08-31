//Caelan Chapman pd7
//step34
#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;
    cout << "divident pls: ";
    cin >> dividend;
    cout << "divisor pls: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "quotient = " << quotient << endl;
    cout << "remainder = " << remainder << endl;

    return 0;
}
