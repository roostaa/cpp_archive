#include <iostream>

using namespace std;

int main()
{
    int x, y;
    x = y = 0;
    string row = "****\n";

    while (x < 5)
    {
        while (y < 3)
        {
            cout << row;
            y ++;
        }
        cout << '\n';
        y = 0;
        x++;
    }



    return 0;
}
