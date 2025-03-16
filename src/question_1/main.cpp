#include<iostream>
#include"question1.h"
using namespace std;

int main()
{
    int sold, points;
    cout << "Enter widgets sold (Enter '-1' to exit): ";
    cin >> sold;

    while(sold != -1)
    {
        
        if(sold > 0)
        {
            cout << "Points Earned = " << get_earned_points(sold);
        }
        else
        {
            cout << "Invalid input. Try again\n";
        }

        cout << "Enter widgets sold (Enter '-1' to exit): ";
        cin >> sold;
    }

    return 0;
}