#include <bits/stdc++.h>
using namespace std;

void Pattern13(int n)
{
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Increasing Number Triangle
    cout << endl
         << "Pattern Printing Increasing Number Triangle" << endl;
    cout << "--------------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern13(N);

    return 0;
}