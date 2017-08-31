#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int x = 1;

    for (x; x <= 12; x++)
    {
        // for some reason it outputs a leading 0 and i can't pin down why so i just spaced it out a little
        cout << "\n\non the " << x << " day of christmas my significant other burdened me with: \n\n";
        if (x == 1)
        {
            Sleep(500);
            cout << "a terrorist with an m16.\n\n";
        }

      Sleep(500);
        switch(x) // it sleeps for user frustration
        {
        case 12:
            cout << "twelve drummers drumming,\n";
            Sleep(300);
        case 11:
            cout << "eleven pipers piping,\n";
            Sleep(300);
        case 10:
            cout << "ten lords a leaping,\n";
            Sleep(300);
        case 9:
            cout << "nine ladies dancing,\n";
            Sleep(300);
        case 8:
            cout << "eight maids a milking,\n";
            Sleep(300);
        case 7:
            cout << "seven swans a swimming,\n";
            Sleep(300);
        case 6:
            cout << "six geese a laying,\n";
            Sleep(300);
        case 5:
            cout << "five golden rinigs (dank),\n";
            Sleep(300);
        case 4:
            cout << "four calling birds,\n";
            Sleep(300);
        case 3:
            cout << "three french hens,\n";
            Sleep(300);
        case 2:
            cout << "two turtle doves,\n";
            Sleep(300);

        }
        if (x != 1)
        {
             cout << "and a terrorist with an m16.\n\n";
             Sleep(300);
        }
        system("pause");
        system("CLS");
    }

}
