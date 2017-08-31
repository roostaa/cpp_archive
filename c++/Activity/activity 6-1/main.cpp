#include <iostream>
//A1B1B2B3A2B1B2B3
using namespace std;

//A starts at 65

int main()
{
    int num, num2, cast, cast2;
//                                                      this is probably what you wanted to see
//    for (num = 1; num <=3; num++)
//    {
//        cout << 'A';
//        cout << num;
//        for (num2 = 1; num2 <= 3; num2++)
//        {
//            cout << 'B';
//            cout << num2;
//        }
//    }
                                                        // this is what i felt like doing

    for (cast = 65; cast <= 90; cast ++) // outside loop, determines first letter
    {                                                                                                                               // 78 combinations
        for (num = 1; num <= 3; num ++) // second outer loop, determines first number
        {
            cout << char(cast);
            cout << num;
            for (cast2 = 65; cast2 <= 90; cast2++) // next two loops are inner, they do every letter of the alphabet with a 1, 2, or 3 next to it before going back and incrementing the outer loops.
            {                                                         // 78 combinations per combo. over 6000 combinations.
                for (num2 = 1; num2 <= 3; num2 ++)
                {
                    cout << char(cast2);
                    cout << num2;
                }
            }
        }
    }



    return 0;
}
