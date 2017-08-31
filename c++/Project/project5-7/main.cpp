//Caelan Chapman PD 7 Project 5-7

/*-------------------------------------------------------------------------------------------------------------------------------------
1GBP = 2 memes
1 meme = 1.75 danks
                                                                                                SWITCH STATEMENT FOR INPUT NUMBERS + GOTO
Could not figure out how to make them constants and not need to use other numbers so I'll edit this if i need to.
----------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    system("color a2");
    int convert1, convert2;
    float moneys;
    float total = 0.0;
    char yn;

again:
    cout << "1. GBP (good boy points)\n";
    cout << "2. MEmeS\n";
    cout << "3. Dank\n";
    cout << "\nwhat is currency? ";
    cin >> convert1;

    cout << "\nhow much maney: ";
    cin >> moneys;

    switch (convert1)
    {
    case 1:
case1:
        cout << "1. N/A\n";
        cout << "2. MEmeS\n";
        cout << "3. Dank\n";
        cout << "\nyou've selected  GBP. what do you want to convert to? ";
        cin >> convert2;
        cout << '\n';

        switch(convert2)
        {
        case 1:
            cout << "this is your current currency, i blocked it off and you still chose it idiot\n\n";
            goto case1;
            break;

        case 2:
            cout << "converting to MEmeS";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 2 * moneys;
            cout << "\noriginal currency: " << moneys << endl;
            cout << "MEmeS: " << total << endl;
            break;

        case 3:
            cout << "converting to Dank";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 3.5 * moneys;
            cout << "\noriginal currency: " << moneys << endl;
            cout << "Dank: " << total << endl;
            break;
        }
        break;
    case 2:
case2:
        cout << "1. GBP\n";
        cout << "2. N/A\n";
        cout << "3. Dank\n";
        cout << "\nyou've selected  MEmeS. what do you want to convert to? ";
        cin >> convert2;
        cout << '\n';

        switch(convert2)
        {
        case 1:
            cout << "Converting to GBP";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = .5 * moneys;
            cout << "\noriginal currency: " << moneys << endl;
            cout << "GPB: " << total << endl;
            break;

        case 2:
            cout << "this is your current currency, i blocked it off and you still chose it idiot\n\n";
            goto case2;
            break;

        case 3:
            cout << "converting to Dank";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = 1.75 * moneys;
            cout << "\noriginal currency: " << moneys << endl;
            cout << "Dank: " << total << endl;
            break;
        }
        break;
    case 3:
case3:
        cout << "1. GBP\n";
        cout << "2. MEmeS\n";
        cout << "3. N/A\n";
        cout << "\nyou've selected  Dank. what do you want to convert to? ";
        cin >> convert2;
        cout << '\n';
        switch(convert2)
        {
        case 1:
            cout << "Converting to GBP";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = .28571 * moneys;
            cout << "\noriginal currency: " << moneys << endl;
            cout << "GPB: " << total << endl;
            break;

        case 2:
            cout << "converting to MEmeS";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            Sleep(300);
            cout << ".";
            cout << '\n';
            total = .57143 * moneys;
            cout << "\noriginal currency: " << moneys << endl;
            cout << "MEmeS: " << total << endl;
            break;

        case 3:
            cout << "this is your current currency, i blocked it off and you still chose it idiot\n\n";
            goto case3;
            break;
        }
        break;
    }
    cout << "\n\nWould you like to convert another amount? y/N?   ";

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
