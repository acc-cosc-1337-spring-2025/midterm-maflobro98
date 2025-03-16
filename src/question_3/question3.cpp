#include "question3.h"
#include<iostream>
#include<vector>

using namespace std;

bool test_config()
{
    return true;
}

bool is_prime(int num)
{
    bool counter = false;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            counter = true;
        }
    }
    return counter;
}

int get_primes(int num)
{
    vector<int> primes = {};
    for(int i = 2; i <= num ; i++)
    {
        num = i;
        if(is_prime(i) == true)
        {
            primes.push_back(i);
        }
    }
}