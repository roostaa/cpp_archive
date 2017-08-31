//Caelan Chapman PD 7 step 6-7

#include <iostream>

using namespace std;

int main()
{
    double num, squared;
    do
    {
        cout << "num> (0 to quit: ";
        cin >> num;
        if (num == 0)
        {
            {
                break;
            }
            squared = num * num;
            cout << num << " squared is " << squared << endl;
        }
    }

    while (1);

    return 0;
}
