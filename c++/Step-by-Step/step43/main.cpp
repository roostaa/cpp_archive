//Caelan Chapman Step43
#include <iostream>

using namespace std;

int main()
{
    int noodle1, noodle2;
    string string1;
    string string2 ("cancer");

    string1 = "ebola";

    noodle1 = string1.length();
    noodle2 = string2.length();

    cout << string1 << endl;
    cout << "length: " << noodle1 << endl;
    cout << string2 << endl;
    cout << "length: " << noodle2 << endl;

// next thing we had to add

    string1 = "ebola";
    string2 = "cancer";

    string1 = string1 + ' ' + string2;

    cout << string1 << endl;

    return 0;
}
