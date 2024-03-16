#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumToN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumToN(n - 1);
}

int main()
{
    int n = 3;
    cout << sumToN(n);
    return 0;
}