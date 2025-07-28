#include <bits/stdc++.h>
using namespace std;

void Pattern20(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // Stars
        int stars = (i < n) ? i : (2 * n - i);
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }

        // Spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }

        // Stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
    
        cout << endl;
        spaces = (i < n) ? (spaces - 2) : (spaces + 2);
    }
}

int main()
{
    // Pattern Printing Symmetry
    cout << endl
         << "Pattern Printing Symmetry" << endl;
    cout << "--------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern20(N);

    return 0;
}