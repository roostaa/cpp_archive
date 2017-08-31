#include <iostream>

using namespace std;

int main()
{
    int a, b, money;
    char valid;

// input 4 choice

input:
    cout << "please enter the length.\n";
    cin >> a;
    if (a != (1 || 2 || 3|| 4)
        {
            cout << "try again doofus.\n";
            goto input;
        }
        cout << a;


    cout << "\nmrs. fobes won't let us do this proper so this is what we have to deal with.\n\npress a number 0-9 and then select if you want to continue or end your selection.\n\n" << endl;
    numbers:
    cout << "current number" << money;
    cout << "Selection: ";
    cin >> b;
    if (b == 1 || b == 2 || b == 3 || b == 4 || b == 5 || b == 6 || b == 7 || b == 8 || b == 9 || b == 0)
        {
            money = money * 10 + b;
            idiot:
            cout << "add another digit? [y/n] "
            cin >> valid;
            if (valid == 'y')
                {
                    goto numbers;
                }
            else
                {
                    cout << "please this isn't hard\n\";
                    goto idiot;
                }
            if (valid == 'n')
                {
                    goto awesome;
                }
}
        }
    else
        {
            cout << "numbers please... " << endl;
            goto numbers;
        }




awesome:
            cout << "completion" << money;

            return 0;
}
