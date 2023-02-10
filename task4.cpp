#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number for array:  ";
    cin >> number;
    int digit[number];
    bool seven;
    for (int idx = 0; idx <= number - 1; idx++)
    {
        cout << "Enter number of array:  ";
        cin >> digit[idx];
    }
    for (int idx = 0; idx <= number - 1; idx++)
    {
        if (digit[idx] % 10 == 7)
        {
            seven = true;
        }
    }
    if (seven == true)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "There is no 7 in the array";
    }
}