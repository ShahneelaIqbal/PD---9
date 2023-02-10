#include <iostream>
using namespace std;

main()
{
    int price[4] = {60, 70, 40, 30};
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    string name;
    int quantity;
    cout << "Enter fruit name:  ";
    cin >> name;
    cout << "Enter quantity:  ";
    cin >> quantity;
    int total;
    for(int idx = 0; idx <= 3; idx ++)
    {
        if (name == fruit[idx])
        {
            total = quantity * price[idx];
        }
    }
    cout << "Total bill is:  " << total;
}