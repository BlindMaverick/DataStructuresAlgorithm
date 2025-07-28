#include <bits/stdc++.h>
using namespace std;

void Pattern16(int n)
{
    int ch = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << (char)ch << " ";
        }
        ch++;
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Alpha-Ramp
    cout << endl
         << "Pattern Printing Alpha-Ramp" << endl;
    cout << "----------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern16(N);

    return 0;
}