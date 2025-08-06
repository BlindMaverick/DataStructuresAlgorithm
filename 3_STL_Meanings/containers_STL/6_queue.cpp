#include <bits/stdc++.h>
using namespace std;
void explainQueue()
{
    queue<int> q;
    q.push(2);    // 2
    q.push(3);    // 3,2
    q.emplace(4); // 4,3,2

    q.back() += 5; // back = 4, so 4 + 5 = 9

    cout << q.back(); // prints = 9

    // Q is {9, 3, 2}
    cout << q.front(); // prints 2

    q.pop(); //{3, 9}

    cout << q.front(); // prints 3

    // size, swap, empty function same as stack
}