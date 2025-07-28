#include <bits/stdc++.h>
using namespace std;

void Pattern8(int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        // Printing First Space
        for (int sp1 = 0; sp1 < i; sp1++)
        {
            cout << " ";
        }

        // Printing Star
        for (int st = 0; st < ((2*n)-(2*i+1)); st++)
        {
            cout << "*";
        }

        // Printing Second Space
        for (int sp2 = 0; sp2 < i; sp2++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    // Pattern Printing Pyramid
    cout << endl
         << "Pattern Printing Pyramid" << endl;
    cout << "-----------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern8(N);

    return 0;
}