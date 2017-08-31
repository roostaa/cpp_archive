//Caelan Chapman pd 7 5-7

#include <iostream>

using namespace std;

int main()
{
    float amount_to_deposit;

    cout << "how much deposit: ";
    cin >> amount_to_deposit;

    if (amount_to_deposit < 1000.00)
    {
        if (amount_to_deposit < 100.00)
        {
            cout << "consider giving us more money";
        }
        else
        {
            cout < "give us still moore moneys please";
        }
    }
    else
    {
        cout << "consider making an interest account so we make money off of your moenyes";
    }


    return 0;
}
