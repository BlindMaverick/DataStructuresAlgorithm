#include <bits/stdc++.h>
using namespace std;

// VECTORS WORKS ON THE BASES ON SINGLY-LINKED LIST

void explainVectors()
{
    // Default way of declaring vector container Syntax : vector<data-type> vector-container-name;
    vector<int> v;

    // Adding elements into the vector container
    v.push_back(1);
    v.emplace_back(2);

    // Declaring vector container for pair Syntax : vector<pair<data-type, data-type>> vector-container-name;
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // Using push_back() function we have to use curly brackets
    vec.emplace_back(1, 2); // Using emplace_back() function, the function assumes that the input value is a pair

    // Declaring vector container with size predefined
    vector<int> v1(5);

    // Declaring vector container with size predefined with repeation of interger
    vector<int> v2(5, 100);

    // Copying a vector container
    vector<int> v3(v2);

    // Iterator Explaination
    vector<int>::iterator it = v.begin(); // Points to the starting address of the vector container
    it++;                                 // increments the address by 1
    cout << *(it) << " " << endl;
    it = it + 2; // increments by 2
    cout << *(it) << " " << endl;

    // Different types of iterator
    vector<int>::iterator it1 = v.end(); // Points to the address right after the last element
    vector<int>::reverse_iterator rit = v.rend();
    vector<int>::reverse_iterator rit2 = v.rbegin();

    // Difference is v[value] does not check the bounds(fast) and v.at(value) has bounds checks(slow)
    cout << v[0] << " " << v.at(0) << endl;

    // Points to the address of last element
    cout << v.back();

    // Printing the vector
    // Standard Way of doing
    cout << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    // By using auto (used for shortcuts instead of declaring the whole iterator and also used when data type is unknown)
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    // For-Each loop
    cout << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }

    // Deletion of elements in vector
    // Eg : {10, 20, 12, 23}
    v.erase(v.begin() + 1); // Ouput will be {10,12,23}

    // Eg : {10, 20, 12, 23, 35} Deleting a range of elements in vectors
    v.erase(v.begin() + 2, v.begin() + 4); // Output will be {10,20,35}, because the range is from index 2 to index 4 [start, end)

    // Insert function

    vector<int> v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2, 50);                       // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,10,20,35}

    cout << v.size(); // prints the total number of elements in the vector

    //{10,20}
    v.pop_back(); // {10}

    // v1 = {10.20}
    // v2 = {30,40}
    v1.swap(v2); // v1 = {30,40} , v2 = {10,20}

    v.clear(); // Cleares all the elements in the vector
}

int main()
{
    explainVectors();

    return 0;
}