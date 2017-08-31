#include <iostream>

using namespace std;

int main()
{

    /*
      string test(x, c) uses the fill constructor and is what
    this is based off of. I don't think it's cheating because
    we've used strings all the time huehue. it allows me to
    make this program small and not want to die

    - x is the num of iterations
    - c is a char, a space or asterisk in this case.

    using a for loop and redeclaring the string each time i can effectively
    prevent code suicide.

    9   x   9
     Diagram

        *       4 spc 1 ast
       ***      3 spc 3 ast
      *****     2 spc 5 ast
     *******    1 spc 7 ast
    *********   0 spc 9 ast
     *******    1 spc 7 ast
      *****     2 spc 5 ast
       ***      3 spc 3 ast
        *       4 spc 1 ast
                                                                            */

    int diamond = 0;
    int mid = 0;
    int height = 0;
    int iteration = 1;
    int spc_count = 0;
    int ast_count = 0;
    int row_num = 1;

    int* heightIndex = new int[iteration]; // defines an array or a pointer or something probably, it works okay

    char space_c = ' ';
    char star_c = '*';

    bool invert = false;

    cout << "\n\nwith an integer, how many diamonds do you request?\n\n";
    cout << "diamonds: ";
    cin >> diamond;

    for (iteration = 1; iteration <= diamond; iteration++) // loops based on num of diamonds stated above
    {

        cout << "\n\nwith an integer, how tall/wide do you wish your diamond(s) to be?\n\nplease give an odd number. if you give an even, 1 will be added to your input.\n\n";
        cout << "diamond " << iteration << " size: ";
        cin >> heightIndex[iteration]; // writes input to incrementing slots in array/pointer/thing i dont know

        if (heightIndex[iteration] < 0) // i need positive integers boi
        {
            heightIndex[iteration] = heightIndex[iteration] * (-1);
        }

        if ((heightIndex[iteration] % 2) == 0) // check if even, if even add 1
        {
            heightIndex[iteration]++;
        }

        if (heightIndex[iteration] == 1)
        {
          heightIndex[iteration] = 3; // fixed problems with it being 1 and going negative thus screwing up the count.
        }
    }

    iteration = 1;

    for (int diamond_count = 0; diamond_count < diamond; diamond_count++) // diamond counter, tells inner loop to repeat.
    {

        height = heightIndex[iteration];
        mid = (height / 2) + 1; // used to determine when to switch to bottom half

        for (row_num; row_num <= height; row_num++) // draws single diamond - each iteraion is a new row
        {

            if (row_num == 1) // first row special condition
            {
                spc_count = height / 2; // declare starting num of spaces
                string space(spc_count, space_c); // redeclare string so values update (not sure if needed)
                cout << space;

                ast_count = 1; // always will start with 1 star
                string star(ast_count, star_c);
                cout << star << '\n';
                continue;
            }

            if (invert == false) // cannot print negative # of strings, prints top half of diamond
            {
                // space calculations - each row on top -1 per row
                spc_count--;
                string space(spc_count, space_c); // this throws an error if the diamond height is 1. line 80 makes spc_count 0 so line 93 kills this line then
                cout << space;

                // asterisk calculations - each row on top +2 per row
                ast_count += 2;
                string star(ast_count, star_c);
                cout << star << '\n';
            }

            if (invert == true) // bottom portion, just inverted
            {
                // space calculations
                spc_count++;
                string space(spc_count, space_c);
                cout << space;

                // asterisk calculations
                ast_count += (-2);
                string star(ast_count, star_c);
                cout << star << '\n';
            }

            if (row_num == mid) // when at middle row of star, switch to other if statement
            {
                invert = true;
            }

            if (row_num == height) // reset after each diamond
            {
                invert = false; // starts on top again
                spc_count = 0; // reinitialize counter to original value
                ast_count = 0; // ^
                row_num = 1; // ^^
                cout << '\n';
                break;
            }
        }
        iteration++;
    }

    return 0;
}
