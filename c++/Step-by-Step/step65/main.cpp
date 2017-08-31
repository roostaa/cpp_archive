//Caelan Chapman PD 7 step 6-5

#include <iostream>

using namespace std;

int main()
{
    float num;

    cout << "please enter the number to divide:" ;
    cin >> num;
    while (num > 1.0)
    {
        cout << num << endl;
        num = num/2;
    }

    return 0;
}
