//Caelan Chapman pd7
//step37-38
#include <iostream>

using namespace std;

int main()
{
    int j = 1;
    int k;

    cout << "j = " << j << endl;
    j++;
    cout << "j = " << j << endl;
    j--;
    cout << "j = " << j << endl;
    k = j++;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;
    k = ++j;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;

    return 0;
}
