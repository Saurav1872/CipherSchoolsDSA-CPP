/* Lecture 7- Do While And Infinite Loops */

#include <iostream>
using namespace std;

int main() {
    // int password;
    // int count = 0;

    // while(1) // the condition in the while loop, untill it is true, the loop will run
    // {
    //     cout << "chocolates ";
    //     count++;

    //     if(count>100) break;
    // }

    // do(
    //     cin >> password;
    // )
    // while(password < 999999);

    // cout << "Enter the password: ";

    // cin >> password;

    // while(password < 999999) {
    //     cout << "The password does not meet the required conditions, Please enter the password again" << endl;
    //     cin >> password;
    // }

    // cout << "The user has now entered a correct password" << endl;


    int i;
    for(i = 0;  ; i++) {
        cout << i << " ";
        if(i>100) break;
    }

}