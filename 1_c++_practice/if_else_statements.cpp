#include <bits/stdc++.h>
using namespace std;

int main()
{
    // If-Else Statements
    cout << "If-Else Statements Example" << endl;
    cout << "---------------------------" << endl;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "You are a minor." << endl;
    }
    else
    {
        cout << "You are an adult." << endl;
    }

    // If-Else Ladder Statements
    cout << "If-Else Ladder Statements Example" << endl;
    cout << "----------------------------------" << endl;
    int marks;
    cout << "Enter your marks:";
    cin >> marks;
    if (marks >= 80)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "Grade D" << endl;
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "Grade E" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    // Nested If-Else Statements
    cout << "Nested If-Else Statements Example" << endl;
    cout << "----------------------------------" << endl;
    int jobElgibilityAge;
    cout << "Enter a number: ";
    cin >> jobElgibilityAge;
    if (jobElgibilityAge <= 18)
    {
        cout << "You not are eligible for a job." << endl;
    }
    else if (jobElgibilityAge <= 59)
    {
        cout << "You are eligible for a job." << endl;
        if (jobElgibilityAge >= 55)
        {
            cout << ", but retirement is near." << endl;
        }
    }
    else
    {
        cout << "Retirement time. " << endl;
    }

    return 0;
}