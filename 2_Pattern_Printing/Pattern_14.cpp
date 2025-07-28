#include <bits/stdc++.h>
using namespace std;

void Pattern14(int n)
{
    int ch = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            cout << (char)(ch + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Increasing Letter Triangle
    cout << endl
         << "Pattern Printing Increasing Letter Triangle" << endl;
    cout << "--------------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern14(N);

    return 0;
}