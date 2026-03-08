/*. Largest and Smallest in Array 
Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist. Example 1: 
Input: [1,2,4,7,7,5] 
Output: Second Smallest : 2 
Second Largest : 5 
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2 Example 2: 
Input: [1] 
Output: Second Smallest : -1 
Second Largest : -1 
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    if(n < 2){
        cout << "Second Smallest : -1" << endl;
        cout << "Second Largest : -1";
        return 0;
    }

    int smallest = arr[0];
    int largest = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] < smallest)
            smallest = arr[i];
        if(arr[i] > largest)
            largest = arr[i];
    }

    int secondSmallest = 1000000;
    int secondLargest = -1000000;

    for(int i=0;i<n;i++){

        if(arr[i] > smallest && arr[i] < secondSmallest)
            secondSmallest = arr[i];

        if(arr[i] < largest && arr[i] > secondLargest)
            secondLargest = arr[i];
    }

    if(secondSmallest == 1000000)
        secondSmallest = -1;

    if(secondLargest == -1000000)
        secondLargest = -1;

    cout << "Second Smallest : " << secondSmallest << endl;
    cout << "Second Largest : " << secondLargest;

    return 0;
}