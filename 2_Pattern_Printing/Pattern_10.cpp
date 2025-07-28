#include <bits/stdc++.h>
using namespace std;

void Pattern10(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = (i <= n) ? i : (2 * n - i);
        cout << string(stars, '*') << endl;
    }

    cout << endl;
}

int main()
{
    // Pattern Printing  Rotated Triangle (Right facing Arrow)
    cout << endl
         << "Pattern Printing  Rotated Triangle (Right facing Arrow)" << endl;
    cout << "--------------------------------------------------------" << endl;

    // Input number of rows
    int N;
    cout << "Enter the number of rows (N): ";
    cin >> N;

    Pattern10(N);

    return 0;
}