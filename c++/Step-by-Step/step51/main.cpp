//Caelan Chapman pd 7 5-1

#include <iostream>

using namespace std;

int main()
{
    int i = 2;
    int j = 3;
    bool true_false;

    cout << (i == 2) << endl;
    cout << (i == 1) << endl;
    cout << (j > i) << endl;
    cout << (j < i) << endl;
    cout << (j <= i) << endl;
    cout << (j >= i) << endl;
    cout << (j != i) << endl;
    true_false = (j < 4);
    cout << true_false << endl;

    return 0;
}
