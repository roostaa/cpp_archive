//Caelan Chapman PD 7 step 6-6

#include <iostream>

//this would have been useful like a week ago

using namespace std;

int main()
{
    double num, squared;
    do
    {
        cout << "enter num (0 to quit): ";
        cin >> num;
        squared = num * num;
        cout << num << " squared is " << squared << endl;
    }

while (num != 0);

    return 0;
}
