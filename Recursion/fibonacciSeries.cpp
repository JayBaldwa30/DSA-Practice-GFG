#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n)
{
    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;

    printFibonacci(n); // Print Fibonacci series up to n terms

    return 0;
}