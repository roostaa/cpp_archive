//Caelan Chapman pd 7 5-3

#include <iostream>

using namespace std;

int main()
{
    bool white, black, friendly, acceptable;

    white = true;
    black = false;
    friendly = false;

    acceptable =(white && black || friendly);
    cout << acceptable << endl;

    acceptable =((white && black) || friendly);
    cout << acceptable << endl;

    return 0;
}
