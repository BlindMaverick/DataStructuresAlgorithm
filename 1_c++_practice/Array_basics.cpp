#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1D Array Basics
    cout << "1D Array Basics Example" << endl;
    cout << "---------------------" << endl;

    // Declare an array of integers
    int arr[5];

    // Input elements into the array
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Output the elements of the array
    cout << "You entered: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2D Array Basics
    cout << "2D Array Basics Example" << endl;
    cout << "------------------------" << endl;

    // Declare a 2D array of integers
    int arr2D[3][3];

    // Input elements into the 2D array
    cout << "Enter 9 integers for a 3X3 matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2D[i][j];
        }
    }

    // Output the elements of the 2D array
    cout << "You entered the 3X3 matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}