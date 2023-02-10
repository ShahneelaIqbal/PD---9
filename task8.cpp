#include <iostream>
using namespace std;

main()
{
    string first;
    string second;
    int count = 0;
    
    cout << "Enter string:  ";
    cin >> first ;
    cout << "Enter string:  ";
    cin >> second;
    int length1 = first.length();
    int length2 = second.length();
    for(int idx = 0; idx <= length1 - 1; idx ++)
    {
        for(int idx1 = 0; idx1 <= length2 - 1; idx1 ++)
        {
            if(first[idx] == second[idx1])
            {
                count = count + 1;
                second[idx1]= ' ';
                break;
            }
        }
    }
    cout << count;

    
}