/*-------------------------------------------------------------------------------------------------------------------------------------
Caelan Chapman PD 7 Algorithm 3

                       doot                     doot
----------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    //conversion variables
    system("color a2");
    int unit2;
    float length;
    float total = 0.0;
    char yn;

    //cancer input limiting variables
    int b;
    string castcancer = "";
    string valid = "";
    string a = "";

again:
    cout << "1. Feet\n";
    cout << "2. Inches\n";
    cout << "3. Meters\n";
    cout << "4. Kilometers\n";

        goto cancer;

        input:

            cout << "please enter the initial unit.\n";
            cin >> a;
            if (a == "1" || a == "2" || a == "3" || a == "4")
                {
                    a = (int)a - 48;
                    goto selection;
                }

            else
                {
                    cout << "try again doofus.\n";
                    goto input;
                }

        selection:

            cout << "\nmrs. fobes won't let us do this proper so this is what we have to deal with.\n\npress a number 0-9 and then select if you want to continue or end your selection.\n\n" << "if you type like an idiot i'll take the first thing you type.\n\n" << endl;
            numbers:
            cout << "\ncurrent number: " << length << "\n\n";
            cout << "Selection: ";
            cin >> castcancer;
            b = (int)castcancer[0] - 48; // super jank way of limiting to one character because it's 2am and im pissed
            if (b == 1 || b == 2 || b == 3 || b == 4 || b == 5 || b == 6 || b == 7 || b == 8 || b == 9 || b == 0)
                {
                    length = length * 10 + b;
                    idiot:
                    cout << "add another digit? [y/n] ";
                    cin >> valid;
                    if (valid == "y")
                        {
                            goto numbers;
                        }
                    if (valid == "n")
                    {
                        goto conversion;
                    }
                    else
                        {
                            cout << "\nplease this isn't hard\n\n";
                            goto idiot;
                        }
                }

            else
                {
                    cout << "\nnumbers please... " << endl;
                    //cout << b;
                    goto numbers;
                }

        cancer:

            goto input;

        conversion:

    switch (a)
    {
    case 1:
case1:
        cout << "1. N/A\n";
        cout << "2. Inches\n";
        cout << "3. Meters\n";
        cout << "4. Kilometers\n";
        cout << "\nyou've selected Feet. what do you want to convert to? ";    

input2:

    cout << "please enter the second unit.\n";
    cin >> unit2;
    if (unit2 == "1" || unit2 == "2" || unit2 == "3" || unit2 == "4")
        {
            unit2 = (int)unit2 - 48;
            goto convert1;
        }

    else
        {
            cout << "try again doofus.\n";
            goto input2;
        }

convert1:

        //cin >> unit2;

        cout << '\n';

        switch(unit2)
        {
        case 1:
            cout << "this is your current unit, i blocked it off and you still chose it idiot\n\n";
            goto case1;
            break;

        case 2:
            cout << "converting to Inches";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 12 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Inches: " << total << endl;
            break;

        case 3:
            cout << "converting to Meters";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 0.3048 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Meters: " << total << endl;
            break;

        case 4:
            cout << "converting to Kilometers";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 0.0003048 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Kilometers: " << total << endl;
            break;
        }
        break;
    case 2:
case2:
        cout << "1. Feet\n";
        cout << "2. N/A\n";
        cout << "3. Meters\n";
        cout << "4. Kilometers\n";
        cout << "\nyou've selected  Inches. what do you want to convert to? ";

input3:

    cout << "please enter the second unit.\n";
    cin >> unit2;
    if (unit2 == "1" || unit2 == "2" || unit2 == "3" || unit2 == "4")
        {
            unit2 = (int)unit2 - 48;
            goto convert2;
        }

    else
        {
            cout << "try again doofus.\n";
            goto input3;
        }

convert2:

        //cin >> unit2;

        cout << '\n';

        switch(unit2)
        {
        case 1:
            cout << "Converting to Feet";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = (1/12) * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Inches: " << total << endl;
            break;

        case 2:
            cout << "this is your current unit, i blocked it off and you still chose it idiot\n\n";
            goto case2;
            break;

        case 3:
            cout << "converting to Meters";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 0.0254 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Meters: " << total << endl;
            break;

        case 4:
            cout << "converting to Kilometers";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 0.0000254 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Kilometers: " << total << endl;
            break;
        }
        break;
    case 3:
case3:
        cout << "1. Feet\n";
        cout << "2. Inches\n";
        cout << "3. N/A\n";
        cout << "4. Kilometers\n";
        cout << "\nyou've selected Meters. what do you want to convert to? ";

input4:

    cout << "please enter the second unit.\n";
    cin >> unit2;
    if (unit2 == "1" || unit2 == "2" || unit2 == "3" || unit2 == "4")
        {
            unit2 = (int)unit2 - 48;
            goto convert3;
        }

    else
        {
            cout << "try again doofus.\n";
            goto input4;
        }

convert3:

        //cin >> unit2;

        cout << '\n';
        switch(unit2)
        {
        case 1:
            cout << "Converting to Feet";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 3.28084 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Feet: " << total << endl;
            break;

        case 2:
            cout << "converting to Inches";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 3.28084 * 12 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Inches: " << total << endl;
            break;

        case 3:
            cout << "this is your current unit, i blocked it off and you still chose it idiot\n\n";
            goto case3;
            break;

        case 4:
            cout << "converting to Kilometers";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = .001 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Kilometers: " << total << endl;
            break;
        }
        break;
    case 4:
case4:
        cout << "1. Feet\n";
        cout << "2. Inches\n";
        cout << "3. Meters\n";
        cout << "4. N/A\n";
        cout << "\nyou've selected Kilometers. what do you want to convert to? ";

input5:

    cout << "please enter the second unit.\n";
    cin >> unit2;
    if (unit2 == "1" || unit2 == "2" || unit2 == "3" || unit2 == "4")
        {
            unit2 = (int)unit2 - 48;
            goto input5;
        }

    else
        {
            cout << "try again doofus.\n";
            goto convert4;
        }

convert4:

        //cin >> unit2;

        cout << '\n';

        switch(unit2)
        {
        case 1:
            cout << "converting to Inches";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 39370.1 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Inches: " << total << endl;
            break;
        case 2:
            cout << "converting to Feet";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 39370.1 * length / 12;
            cout << "\noriginal unit: " << length << endl;
            cout << "Feet: " << total << endl;
            break;
        case 3:
            cout << "converting to Meters";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 1000 * length;
            cout << "\noriginal unit: " << length << endl;
            cout << "Meters: " << total << endl;
            break;

        case 4:
            cout << "this is your current unit, i blocked it off and you still chose it idiot\n\n";
            goto case4;
            break;
        }
        break;
    }
    cout << "\n\nWould you like to convert another length? y/N?   ";

    cin >> yn;
    cout << '\n';

    if (yn == 'y')
    {
        goto again;
    }
    else
    {
        cout << "\n\nThank you for using this terrible service.\n\n";
    }

    return 0;
}
