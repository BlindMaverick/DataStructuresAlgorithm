#include <bits/stdc++.h>
using namespace std;

void Pattern18Reverse(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(ch - j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Alpha-Triangle
    cout << endl
         << "Pattern Printing Alpha-Triangle" << endl;
    cout << "--------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern18Reverse(N);

    return 0;
}