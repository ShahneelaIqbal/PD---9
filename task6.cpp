#include <iostream>
using namespace std;

main()
{
    int number;
    int operation;
    cout << "Enter number for array:  ";
    cin >> number;
    cout << "Enter number for operation:  ";
    cin >>  operation;
    int digit[number];
    for (int idx = 0; idx <= number - 1; idx ++)
    {
        cout << "Enter number of array:  ";
        cin >> digit[idx];
    }
    for (int idx = 0; idx <= number - 1; idx ++)
    {
        if (digit[idx] % 2 == 0)
        {
            for (int count = 0; count <= operation - 1; count ++ )
            {
                digit[idx] = digit[idx] - 2;
            }
        }
        else
        {
            for (int count = 0; count <= operation - 1; count ++ )
            {
                digit[idx] = digit[idx] + 2;
            }
        }
        cout << digit[idx] << " ";
    }
    
}