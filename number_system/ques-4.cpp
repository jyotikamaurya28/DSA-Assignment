/*
4.	Problem Statement – 
Write a function to solve the following equation a³ + a²b + 2a²b + 2ab² + ab² + b³. 
Write a program to accept three values in order of a, b and c and get the result of the above equation. 
*/

#include <iostream>
using namespace std;

int solveEquation(int a, int b) {
    return (a*a*a) + (a*a*b) + (2*a*a*b) + (2*a*b*b) + (a*b*b) + (b*b*b);
}

int main() {
    int a, b, c;

    cout << "Enter values of a, b and c: ";
    cin >> a >> b >> c;

    int result = solveEquation(a, b);

    cout << "Result: " << result;

    return 0;
}