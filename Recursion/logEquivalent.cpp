#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if (n == 1)
    {
        return 0;
    }
    return 1 + fun(n / 2);
}

int main()
{
    cout << fun(32); // this will print the value for log base2 32
    return 0;
}