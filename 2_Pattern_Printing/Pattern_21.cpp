#include <bits/stdc++.h>
using namespace std;

void Pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Stars
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }

            // Spaces
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Ninja And The Star Pattern I
    cout << endl
         << "Pattern Ninja And The Star Pattern I" << endl;
    cout << "-------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern21(N);

    return 0;
}