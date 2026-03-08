/*Problem Statement – 
Bela teaches her daughter to find the factors of a given number. When she provides a number to her daughter, she should tell the factors of that number. Help her to do this, by writing a program. Write a class FindFactor.java and write the main method in it. 
Note: 
If the input provided is negative, ignore the sign and provide the output. If the input is zero the output should be “No Factors”. 
Sample Input:- 
54 
Sample Output:- 1,2,3,6,9,18,27,54 
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    if(num == 0) {
        cout << "No Factors";
        return 0;
    }

    if(num < 0)
        num = -num;

    bool first = true;

    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            if(!first)
                cout << ",";
            cout << i;
            first = false;
        }
    }

    return 0;
}