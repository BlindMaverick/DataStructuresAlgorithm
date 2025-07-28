#include <bits/stdc++.h>
using namespace std;

void Pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    // Pattern Printing Seeding example (Inverted Right-Angled Triangle)
    cout << endl
         << "Pattern Printing Seeding example (Inverted Right-Angled Triangle)" << endl;
    cout << "------------------------------------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern5(N);

    return 0;
}