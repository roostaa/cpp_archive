#include <iostream>

using namespace std;

int main()
{
    int x;

    for (x = 1; x <=20; x++)
    {
        if (x == 3 || x == 11 || x == 16)
        {
            continue;
        }
        cout << x << endl;
    }


    return 0;
}
