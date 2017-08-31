//Caelan Chapman pd 7 5-6

#include <iostream>

using namespace std;

int main()
{
    bool exempt_from_final = false;
    int my_average, my_days_absent;

    cout << "gimme average: " << endl;
    cin >> my_average;
    cout << "gimme absent: " << endl;
    cin >> my_days_absent;

    if (my_average >= 90)
        {
            if (my_days_absent <= 3)
            {
                exempt_from_final = true;
            }
            if (my_average >= 80)
            {
                if (my_days_absent <= 1)
                {
                    exempt_from_final = true;
                }
            }
        }

        cout << "1 = exempt, 0 = failing you pleb\n\n" << exempt_from_final;

    return 0;
}
