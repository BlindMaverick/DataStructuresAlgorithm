#include <bits/stdc++.h>
using namespace std;

void Pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{

    // Pattern Printing Same Number in the same row Right Angled Triangle
    cout << endl << "Pattern Printing Same Number in the same row Right Angled Triangle" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    // Input from user
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    // Printing Function
    Pattern4(N);

    return 0;
}