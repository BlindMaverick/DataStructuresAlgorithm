#include <bits/stdc++.h>
using namespace std;

void Pattern11(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int start = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Binary Number Right Angle Triangle
    cout << endl
         << "Pattern Printing Binary NumberRight Angle Triangle" << endl;
    cout << "----------------------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern11(N);

    return 0;
}