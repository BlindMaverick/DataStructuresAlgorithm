#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int> dq;

    dq.push_back(1);     // {1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    // {4,1,2}
    dq.emplace_front(5); // {5,4,1,2}

    dq.pop_back();  // {5,4,1}
    dq.pop_front(); // {4,1}

    dq.back();

    dq.front();
}