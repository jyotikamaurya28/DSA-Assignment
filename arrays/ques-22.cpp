/*. Count pairs with given sum:- 
Given an array arr[] of n integers and a target value, find the number of pairs of integers in the array whose sum is equal to target. Examples: 
Example:-1 
Input: arr[] = [1, 5, 7, -1, 5], target = 6 
Output: 3 
Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5). 
*/

#include <iostream>
using namespace std;

int main() {

    int n, target;
    cin >> n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    cin >> target;

    int count = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i] + arr[j] == target)
                count++;

        }
    }

    cout << count;

    return 0;
}