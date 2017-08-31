// Caelan Chapman Activity 3-1
#include <iostream>

using namespace std;

int main()
{
    const int bC = 50;
    const int vC = 7;
    int x, b, v, r, r2, z;

    cout << "how many maggots: ";
    cin >> x;

    r =  x % bC; // remainder1 = total mod busConstant
    b =  (x - r) / bC; // bus = (total - remainder) / busConstant
    r2 = r % vC; // remainder2 = remainder mod vanConstant
    v = (r - r2) / vC; // van = (remainder - remainder2) / vanConstant
    z = r2 / r2; // divides the second remainder by itself, ex. 5 extra people. 5/5 = 1.
    v = v + z; // Adds 1 to van count if there are extra people. If there is no second remainder, the program ends up diving by 0. The intention is to have z = 1 or 0 and add that to v. Maybe a way to do it with fractions and multiplication...?

    cout << "bus: " << b << endl;
    cout << "van: " << v << endl;

    return 0;
}
