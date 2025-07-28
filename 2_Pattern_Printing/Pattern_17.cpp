#include <bits/stdc++.h>
using namespace std;

void Pattern17(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        // Printing First Space
        for (int sp = 0; sp < (n - i - 1); sp++)
        {
            cout << " ";
        }

        // Printing character
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            cout << ch;
            (j <= breakpoint) ? ch++ : ch--;
        }

        // Printing Second Space
        for (int sp = 0; sp < (n - i - 1); sp++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    // Pattern Printing Alpha-Hill
    cout << endl
         << "Pattern Printing Alpha-Hill" << endl;
    cout << "----------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern17(N);

    return 0;
}