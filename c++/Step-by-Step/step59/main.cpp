//Caelan Chapman pd 7 5-9

#include <iostream>

using namespace std;

int main()
{
    char character_entered;

    cout << "a b or c boi: ";
    cin >> character_entered
;

    switch(character_entered)
    {
    case 'A':
        cout << "A was entered as in anthropomorphic lemons";
        break;
    case 'B':
        cout << "B was entered as in MORAL BAROMETER";
        break;
    case 'C':
        cout << "C was entered as in CERTIFIED DEMON BABIES";
        break;
    }
    return 0;
}
