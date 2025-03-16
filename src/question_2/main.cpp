#include "question2.h"
#include<iostream>
using namespace std;

int main()
{
    string wrd;
    cout << "Enter a string(Enter 'x' to exit): ";
    cin >> wrd;
    while(wrd != "x")
    {
        cout << endl;
        cout << is_palindrome(wrd);
        cout << "Enter a string(Enter 'x' to exit): ";
        cin >> wrd;
    }

    cout << "Good bye!";

    return 0;
}