#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter word:  ";
    cin >> word;
    int length = word.length();
    if (length % 2 == 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

}