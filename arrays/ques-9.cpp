/*9.	Binary Search: 
Implement a binary search algorithm to find a target value in a sorted array. Input: Array: [1, 2, 3, 4, 5, 6, 7, 8, 9], Target: 4 
Output: 3 
Explanation: The function returns the index of the target value in the array. 
 
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {

    int low = 0;
    int high = n - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == target)
            return mid;

        else if(target < arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int target;

    cout << "Enter target: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if(result != -1)
        cout << result;
    else
        cout << "Element not found";

    return 0;
}