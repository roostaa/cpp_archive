//Caelan Chapman pd7
//step310
#include <iostream>

using namespace std;

int main()
{
    int bodies;
    float money;
    float share;

    cout << "how many money: ";
    cin >> money;
    cout << "share with how many bodies: ";
    cin >> bodies;

    share = money / bodies;

    cout << "each person gets $" << share << " moneys" <<  endl;

    return 0;
}
