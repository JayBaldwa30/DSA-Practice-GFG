#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumofDigitsofNumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sumofDigitsofNumber(n / 10) + n % 10;
}

int main()
{
    int n = 10101;
    cout << sumofDigitsofNumber(n);
    return 0;
}