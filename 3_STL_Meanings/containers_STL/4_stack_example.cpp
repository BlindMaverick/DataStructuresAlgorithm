#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.emplace(4); //{4,3,2,1}

    cout << st.top(); // Prints : 4

    st.pop(); // popped item : 4, stack st = {3,2,1}

    cout << st.top(); // Prints : 3

    cout << st.size(); // Prints : 4

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}