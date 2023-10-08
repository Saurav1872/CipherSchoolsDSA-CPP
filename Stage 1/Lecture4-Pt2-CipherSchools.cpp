/* Lecture4 II: Conditional statements, If else, Switch case pt 2 */

#include <iostream>
using namespace std;

int main()
{
    // int a, b, c, d;

    // cout << "Input 4 integers a, b, c, d" << endl;

    // cin >> a;
    // cin >> b;
    // cin >> c;
    // cin >> d;

    // // Statement: a>b

    // cout << (a > b || c > d);

    // C++ interprets true as 1
    // C++ interprets false as 0

    // float a, b;

    // cout << "Give 2 floating point numbers as input" << endl;
    // cin >> a >> b;
    // if (a > 0.01 && b > a)
    // {
    //     cout << "The condition in if statement is correct"; // Will only be printed
    // }
    // else if (a > 0.01 || b > a)
    // {
    //     cout << "The condition in  else if statement is correct. ";
    // }

    // int marks;
    // cout << "student, please enter the marks to calculate the grade:";

    // cin >> marks;
    // cout << "the calculated grade is: ";
    // if (marks > 90)
    // {
    //     cout << "A";
    // }

    // else if (marks > 80)
    // {
    //     cout << "B";
    // }

    // else if (marks > 70)
    // {
    //     cout << "C";
    // }
    // else
    // {
    //     cout << "Pass";
    // }

    // int a, b, c, d;

    // cout << "give four integers as input: a,b,c,d" << endl;
    // cin >> a >> b >> c >> d;

    // if (a > b && c > d)
    // {
    //     cout << "Haha";
    // }
    // else if (a > b && c < d)
    // {
    //     cout << "Hehe";
    // }
    // else if (a < b && c > d)
    // {
    //     cout << "Huhu";
    // }

    // for switch conditions
    int a;

    cout << "enter an integer:";

    cin >> a;

    switch (a)
    {
    case 1:
        cout << "the value of a is 1";
        break;

    case 2:
        cout << "the value of a is 2";
        break;

    default:
        cout << "default will be always printed";
        break;
    }
    return 0;
}