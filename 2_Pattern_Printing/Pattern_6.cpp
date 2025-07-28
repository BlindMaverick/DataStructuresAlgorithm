#include <bits/stdc++.h>
using namespace std;

void Pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Reverse Number Triangle
    cout << endl
         << "Pattern Printing Reverse Number Triangle" << endl;
    cout << "-----------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern5(N);

    return 0;
}