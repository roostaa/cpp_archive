//Caelan Chapman PD 7 Project 5-1

#include <iostream>

using namespace std;

int main()
{
    int i = 4;
    int j = 3;
    bool true_false;

    true_false = (j < 4);
    cout << true_false;
    true_false = (j < 3);
    cout << true_false;
    true_false = (j < i);
    cout << true_false;
    true_false = (i < 4);
    cout << true_false;
    true_false = (j <= 4);
    cout << true_false;
    true_false = (4 > 4);
    cout << true_false;
    true_false = (i != j);
    cout << true_false;
    true_false = (i == j || i < 100);
    cout << true_false;
    true_false = (i == j || i && 100);
    cout << true_false;
    true_false = (i < j || true_false && j >= 3);
    cout << true_false;
    true_false = (!(i > 2 && j == 4));
    cout << true_false;
    true_false = !1;
    cout << true_false;

    return 0;
}
