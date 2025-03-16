#include "question3.h"
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int num;
    vector<int> result;
    cout << "Enter a number(Enter -1 to exit): ";
    cin >> num;

    while(num != -1 && num >= 1 && num <= 60)
    {
        result = get_primes(num);
        cout << result;
    }

    cout << "goodbye!" << endl;
    return 0;
}