#include <iostream>
using namespace std;

main()
{
    string movie[5] = {"infinitywar", "starwars", "endgame", "terminator", "harrypotter"};
    string name;
    cout << "Enter movie name:  ";
    cin >> name;
    int price = 500;
    int discount;
    for (int idx = 0; idx <= 4; idx ++)
    {
        if(name == movie[1] || name == movie[3])
        {
            discount = (price / 100) * 5;
            price = price - discount;
            break;              
        }
        else if(name == movie[0] || name == movie[2] || name == movie[4])
        {
            discount = (price / 100) * 10;
            price = price - discount;  
            break;            
        }
        
    }
    cout << "Price is:  " << price << endl;
}