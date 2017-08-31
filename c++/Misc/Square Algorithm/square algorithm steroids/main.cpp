#include <iostream>

using namespace std;

int main()
{
    int z1, z2, width, height, cube;
    z1 = z2 = width = height = cube = 0;

    cout << "Number of rows desired: ";
    cin >> height;
    cout << "number of columns desired:";
    cin >> width;
    cout << "number of cubes desired: ";
    cin >> cube;

    while (z1 < cube) // number of cubes
    {
        while (z2 < height) // each cube
        {
            for (int x = 0; x < width; x++) // each asterisk
            {
                cout << '*';
            }
            cout << '\n';
            z2++;
        }
        cout << '\n';
        z2 = 0;
        z1++;
    }



    return 0;
}
