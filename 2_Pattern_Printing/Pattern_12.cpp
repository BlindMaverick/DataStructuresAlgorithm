#include <bits/stdc++.h>
using namespace std;

void Pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // First Number Series
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // Spaces between numbers
        for (int j = 0; j <= (2 * n - 2 * i - 1); j++)
        {
            cout << "  ";
        }

        // Second Number Series
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

int main()
{
    // Pattern Printing Number Crown
    cout << endl
         << "Pattern Printing Number Crown" << endl;
    cout << "------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern12(N);

    return 0;
}