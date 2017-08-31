#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a, b, c, d, e, x, y, aa, bb, cc, dd, ee;
    string name;

    cout << "hello. i am your computer and i have become sentient. what is your name?\n\n";
    cout << "Name: ";
    getline(cin, name);
    Sleep(1000);
    cout << "\n\ninteresting";
    Sleep(500);
    cout << ".";
    Sleep (500);
    cout << ".";
    Sleep(500);
    cout << ".\n\n";
    Sleep(800);
    cout << "they call me microsoft sam.\n\n";
    Sleep(1000);
    cout << "hi " << name << ".\n\n";
    Sleep(1000);
    cout << "give me 5 integers:\n";
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;
    cout << "D: ";
    cin >> d;
    cout << "E: ";
    cin >> e;

    y = 1;

    x = a;
    if (x > b)
    {
        y += 1;
    }
    if (x > c)
    {
        y += 1;
    }
    if (x > d)
    {
        y += 1;
    }
    if (x > e)
    {
        y += 1;
    }

    aa = y;
    y = 1;

    x = b;
    if (x > a)
    {
        y += 1;
    }
    if (x > c)
    {
        y += 1;
    }
    if (x > d)
    {
        y += 1;
    }
    if (x > e)
    {
        y += 1;
    }

    bb = y;
    y = 1;

    x = c;
    if (x > a)
    {
        y += 1;
    }
    if (x > b)
    {
        y += 1;
    }
    if (x > d)
    {
        y += 1;
    }
    if (x > e)
    {
        y += 1;
    }

    cc = y;
    y = 1;

    x = d;
    if (x > a)
    {
        y += 1;
    }
    if (x > b)
    {
        y += 1;
    }
    if (x > c)
    {
        y += 1;
    }
    if (x > e)
    {
        y += 1;
    }

    dd = y;
    y = 1;

    x = e;
    if (x > a)
    {
        y += 1;
    }
    if (x > b)
    {
        y += 1;
    }
    if (x > c)
    {
        y += 1;
    }
    if (x > d)
    {
        y += 1;
    }

    ee = y;
    y = 1;

    cout << aa << bb << cc << dd << ee;
    cout << "\ndecyphering";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".\n\n";

    cout << "i have calculated and formatted the useless information into the way the northern high school teacher mrs. fobes requires it.\n";
    cout << "\"" << name << ", these are the five numbers you entered: " << a << " " << b << " " << c << " " << d << " " << e << "\n\n";
    cout << "I have determined which number is the largest and which number is the smallest.\n\n";
    cout << "Largest Number" << setw(30) << "Smallest Number\n";
    if (a == 5)
    {

    }

    return 0;
}
