//Caelan Chapman pd 7 5-2

#include <iostream>

using namespace std;

int main()
{
    int i = 2;
    int j = 3;
    bool true_false;

    true_false = (i < 3 && j > 3);
    cout << "The result of (i < 3 && j > 3) is " << true_false << endl;

    true_false = (i < 3 && j >= 3);
    cout << "The result of (i < 3 && j >= 3) is " << true_false << endl;

    cout << "The result of (i == 1 || i == 2) is " << (i == 1 || i == 2) << endl;

    true_false = (j < 4);
    cout << "The result of (j < 4) is " << true_false << endl;

    true_false = !true_false;
    cout << "The result of !true_false is " << !true_false << endl;

    return 0;
}
