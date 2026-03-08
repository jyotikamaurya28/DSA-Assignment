/*Find Duplicate Number 
Problem Statement: Given an array of N + 1 size, where each element is between 1 and N. Assuming there is only one duplicate number, your task is to find the duplicate number. 
Examples: 
Example 1: 
Input: arr=[1,3,4,2,2] 
Output: 2 
Explanation: Since 2 is the duplicate number the answer will be 2. 
Example 2: 
Input: [3,1,3,4,2] 
Output:3 
Explanation: Since 3 is the duplicate number the answer will be 3. 

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    sort(arr, arr+n);

    for(int i=0;i<n-1;i++){

        if(arr[i] == arr[i+1]){
            cout << arr[i];
            break;
        }

    }

    return 0;
}