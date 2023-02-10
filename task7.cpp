#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number for array:  ";
    cin >> number;
    int total;
    int count = 0;
    string arr[number];
    for (int idx = 0; idx <= number - 1; idx++)
    {
        cout << "Enter color name:  ";
        cin >> arr[idx];
    }
    int add;
    total = (number * 2) + (number - 1);
    for (int idx = 0; idx <= number - 1; idx++)
    {
        add = idx + 1;
        if (arr[idx] == arr[add])
        {
            count = count + 1;
        }
    }
    cout << total - count;
}