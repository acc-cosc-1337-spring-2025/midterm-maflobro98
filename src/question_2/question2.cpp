#include "question2.h"
#include<iostream>
using namespace std;

bool test_config()
{
    return true;
}

bool is_palindrome(const string wrd)
{
    bool match = false;
    string switched;
    for(int i = wrd.length() - 1; i >= 0; i--)
    {
        switched = switched + wrd[i];
    }

    if(switched == wrd)
    {
        match = true;
    }
    else
    {
        match = false;
    }

    return match;
}