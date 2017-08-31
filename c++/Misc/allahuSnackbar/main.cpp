#include <iostream>
#include <iomanip>


using namespace std;

void center(int);

int main()
{
    string name;
    string centerHolder;

    cout << "What is your name?\nName: ";
    getline(cin, name);

    centerHolder = "Hello "; centerHolder += name;
    center(centerHolder.length());
    cout << centerHolder << '\n';

    centerHolder = "Welcome to the Allahu Snackbar Co. Snackbar!";
    center(centerHolder.length());
    cout << centerHolder;

}
void center(int length) // couts enough spaces to center the string based upon length, needs work
{
    int width = 80; // width of console
    int total;

    total = width - length;
    total = total / 2;
    cout << string(length, ' ');
}
