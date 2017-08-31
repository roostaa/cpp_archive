#include <iostream>

using namespace std;

int main()
{
    const double SQUARE_ROOT_OF_TWO = 1.414214;
    int i = 3;
    long j = -2048111;
    unsigned long k = 4000000001;
    float n = 1.887;

    short w = 100;
    short x = -100;
    short y = -40000;
    short z = 40000;

    double e = 2.7182818;
    double sos = 340.292;
    double sol = 3.00e8;

    cout << SQUARE_ROOT_OF_TWO << " = constant\n";
    cout << i << " = int\n";
    cout << j << " = long int\n";
    cout << k << " = unsigned long int\n";
    cout << n << " = float\n\n";

    cout << w << " = short\n";
    cout << x << " = short\n";
    cout << y << " = short\n";
    cout << z << " = short\n\n";

    cout << e << " = e\n";
    cout << sos << " = speed of sound\n";
    cout << sol << " = speed of light\n";

    return 0;
}
