#include <bits/stdc++.h>
using namespace std;

void Pattern2(int N)
{
    // Loop through each row
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // Print a star for each column in the current row
            cout << "* ";
        }
        cout << endl
             << endl; // Move to the next line after printing all columns in the current row
    }
}

int main()
{

    // Pattern Printing Right Angled Triangle Example
    cout << endl << "Pattern Printing Right Angled Triangle Example" << endl;
    cout << "-----------------------------------------------" << endl;

    // Input dimension N
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern2(N);

    return 0;
}