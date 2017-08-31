//Caelan Chapman PD 7 step 6-9

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    cout << "begin\n";
    for (i = 1; i <= 3; i++)
    {
        cout << " Outer loop: i = " << i << endl;
        for (j = 1; j <=4; j++)
        {
            cout << "        Inner loop: j = " << j << endl;
        }
    }
    cout << "end" << endl;
    return 0;
}
