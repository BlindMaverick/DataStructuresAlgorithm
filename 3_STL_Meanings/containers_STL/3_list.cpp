#include <bits/stdc++.h>
using namespace std;

// LIST WORKS ON THE BASES ON DOUBLY-LINKED LIST

void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}
    ls.push_front(5);   // {5,2,4}
    ls.emplace_front(6); // {6,5,2,4}
}

int main()
{
    explainList();

    return 0;
}