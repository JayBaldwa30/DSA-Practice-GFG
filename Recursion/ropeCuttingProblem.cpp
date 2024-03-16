//rope cutting problem 
//problem statement:- in how many ways can we cut the rope to get the maximum number of cuts from the available numbers 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxPieces(int number, int a, int b, int c)
{
    if (number == 0)
    {
        return 0;
    }
    if (number < 0)
    {
        return -1;
    }
    int result = max(max(maxPieces(number - a, a, b, c),
                         maxPieces(number - b, a, b, c)),
                     maxPieces(number - c, a, b, c));

    if (result == -1)
    {
        return -1;
    }
    return result + 1;
}

int main()
{
    int number = 27;
    int a = 12;
    int b = 11;
    int c = 9;
    cout << maxPieces(number, a, b, c);
    return 0;
}
