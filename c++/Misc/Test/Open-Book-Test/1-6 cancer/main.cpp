//Caelan Chapman pd 7 1-6

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float diameter, circ;

    cout << "gimme diameter" << endl;
    cin >> diameter;

    circ = 3.14159*diameter;

    cout.setf(ios::fixed);
    cout << setprecision(4) << circ;

    return 0;
}
