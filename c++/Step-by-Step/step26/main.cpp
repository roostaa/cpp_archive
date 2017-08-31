#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.141459;
    double circumference, radius;

    cout << "radius of circle?";
    cin >> radius;

    circumference = 2 * PI * radius;

    cout << "circumference is:";
    cout << circumference << '\n';

    return 0;
}
