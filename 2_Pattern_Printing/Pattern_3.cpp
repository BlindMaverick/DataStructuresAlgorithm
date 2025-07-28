#include <bits/stdc++.h>
using namespace std;

void Pattern3(int n)
{
    // Loop Through each row
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl
             << endl;
    }
}

int main()
{
    // Pattern Printing N-Right Angled Triangle
    cout << endl << "Pattern Printing N-Right Angled Triangle" << endl;
    cout << "---------------------------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern3(N);

    return 0;
}