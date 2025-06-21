//This code demonstrates the use of `break` and `continue` statements in a loop.
// The `break` statement exits the loop when a certain condition is met, while the `continue` statement skips the current iteration and continues with the next one.

#include<iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {

        //Break

        if (i == 5) {
            continue; // Skip the iteration when i is 5 and continue to the next iteration
        }

        //Continue

        if(i == 8) {
            break; // Exit the loop when i is 8
        }
        cout << i << " "; // Print the value of i
    }

    //Output:
    // 1 2 3 4 6 7
    

    return 0;
}