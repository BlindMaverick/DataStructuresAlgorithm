#include <bits/stdc++.h>
using namespace std;

void Pattern1(int n)
{
    // Loop through each row
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            // Print a star for each column in the current row
            cout << "*";
        }
        cout << endl; // Move to the next line after printing all columns in the current row
    }
}

int main()
{
    // Pattern Printing N X M example
    cout << endl << "Pattern Printing N X N Example" << endl;
    cout << "-------------------------------" << endl;

    // Input dimensions N and M
    int N;

    // Prompt user for input
    cout << "Enter the number of rows & Columns (N X N) :";
    cin >> N;

    Pattern1(N);

    return 0;
}