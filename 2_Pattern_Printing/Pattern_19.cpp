#include <bits/stdc++.h>
using namespace std;

void Pattern19(int n)
{
    int inIS = 0;
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }

        // Spaces
        for (int j = 0; j < inIS; j++)
        {
            cout << "  ";
        }

        // Stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        inIS += 2;
        cout << endl;
    }

    inIS = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // Spaces
        for (int j = 0; j < inIS; j++)
        {
            cout << "  ";
        }

        // Stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        inIS -= 2;
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Symmetric Void
    cout << endl
         << "Pattern Printing Symmetric Void" << endl;
    cout << "--------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern19(N);

    return 0;
}