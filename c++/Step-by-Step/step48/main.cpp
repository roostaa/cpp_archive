//Caelan Chapman Step48
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double moneys = 34.99;
    double total;
    int i = 1499;
    int j = 618;
    int k = 2;

    total = moneys + (moneys * 0.07875);

    cout << "total no format\n";
    cout << "total: $" << total << "\n\n";

    cout << "total formatting\n";
    cout.setf(ios::fixed);
    cout << setprecision(2) << "total: $" << total << endl;

    cout << "output with no fieldwidth specified:" << endl;
    cout << i << j << k << "\n\n";

    cout << "output with widths specified:" << endl;
    cout << setw(10) << i << setw(10) << j << setw(10) << k << setw(10) << "boi" << "\n\n";


    return 0;
}
