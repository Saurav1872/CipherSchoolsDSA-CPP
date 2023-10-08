/* Lecture 6 III- Loops pt 3 */

#include <iostream>
using namespace std;

int main()
{
    
    // int i;
    // i = 1;


    // cout << i++ << endl;
    // cout << i;

    // int j, k;
    // i = 0;
    // j = 0;
    // k = 0;

    // cout << i << " " << j << " " << k << endl;
    // j = i++;
    // cout << i << " " << j << " " << k << endl;
    // k = ++i;
    // cout << i << " " << j << " " << k << endl;

    // int i;
    // for (i = 0; i < 101; i++) // called the update which happens after the interation (part of a loop is compeleted )
    // {
    //     // block which gets executed everytime
    //     cout << i << " ";
    // }


    // int i;
    // i = 3;  // initialization
    // while(i < 101)   // condition
    // {
    //     cout << i << " ";   // loop
    //     i++;                // update
    // }


    // guess the number 65
    int i;
    int input;

    i = 100;

    for(int i = 1; i < 101; i++) {
        cin >> input;
        if(input == 65) {
            cout << "congrats you have guessed correct ";
            break;
        }
    }


}