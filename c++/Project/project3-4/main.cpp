// Caelan Chapman Project 3-4
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, v;
    a = b = c = v;
    cout << "gimme lengths of sides pls" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    v = a * b * c;
    cout << "volume: " << v;

    return 0;
}
