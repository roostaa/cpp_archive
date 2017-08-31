//Caelan Chapman PD 7 Project 5-4

#include <iostream>

using namespace std;

int main()
{
    int cancer;

    cout << "gimme cancer: ";
    cin >> cancer;

    if (cancer > 0)
        {
            cout << "positive";
        }
    if (cancer < 0)
    {
        cout << "negative";
    }
    if (cancer == 0)
        cout << "boi i dont know";

    return 0;
}
