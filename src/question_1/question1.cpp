#include "question1.h"
#include<iostream>
using namespace std;

bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    int points;
    if(sold >= 16)
    {
        points = sold * 15;
    }
    else if(sold >= 11)
    {
        points = sold * 10;
    }
    else if(sold >= 6)
    {
        points = sold * 5;
    }
    else if(points >= 1)
    {
        points = sold * 1;
    }
    else
    {
        cout << "Invalid input";
    }
    return points;
}