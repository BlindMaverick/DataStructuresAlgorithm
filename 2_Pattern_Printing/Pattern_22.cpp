#include <bits/stdc++.h>
using namespace std;

void Pattern22(int n)
{
    int num = n;
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(right, left)));
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Ninja And The Number Pattern
    cout << endl
         << "Pattern Ninja And The Number Pattern" << endl;
    cout << "-------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern22(N);

    return 0;
}