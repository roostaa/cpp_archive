//Caelan Chapman pd 7
#include <iostream>

using namespace std;

int main()
{
    string string_ = "A";
    cout << string_<< endl;

    string_ += 'B';
    cout << string_ << '\t';
    cout << string_.length() << " characters" << endl;

  string_ += "CDEFG";
   cout << string_ << '\t';
   cout << string_.length() << " characters" << endl;

    return 0;
}
