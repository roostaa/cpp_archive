//Caelan Chapman pd 7 5-8

#include <iostream>

using namespace std;

int main()
{
    int shipping_method;
    float shipping_cost;

    cout << "1. ground? \n";
    cout << "2. 2 air? \n";
    cout << "3. 1 air? \n";
    cout << "4. carrier pidgeon? \n";
    cout << "gimme shipping method: ";
    cin >> shipping_method;

    switch(shipping_method)
    {
    case 1:
        shipping_cost = 5.00;
        break;
    case 2:
        shipping_cost = 7.50;
        break;
    case 3:
        shipping_cost = 10.00;
        break;
    case 4:
        shipping_cost = 99.99;
        break;
    default:
        shipping_cost = 0.00;
        break;
    }

    cout << "shipping cost: " << shipping_cost << endl;


    return 0;
}
