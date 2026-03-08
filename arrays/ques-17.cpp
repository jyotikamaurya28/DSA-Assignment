/*
17.	Missing Number 
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array. 
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];
    int sum = 0;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    cout << expectedSum - sum;

    return 0;
}