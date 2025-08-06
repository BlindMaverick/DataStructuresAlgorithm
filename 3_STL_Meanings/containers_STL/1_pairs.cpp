#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    //Pairs of 2 variable
    pair<int, int> p = {1, 3};
    cout << p.first << " "<< p.second << endl;
    cout << "Addition of Pairs : " << p.first + p.second << endl;

    //Pairs of n variables
    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    cout << "Addition of Pairs : " << p1.first + p1.second.first + p1.second.second << endl;

    //Pairs of array
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[2].second << endl;
}

int main()
{
    explainPair();

    return 0;
}