/*24.	Majority Element 
Given an array nums of size n, return the majority element. 
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array. 
 
Example 1: 
Input: nums = [3,2,3] Output: 3 
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int nums[100];

    for(int i=0;i<n;i++)
        cin >> nums[i];

    int candidate = 0;
    int count = 0;

    for(int i=0;i<n;i++){

        if(count == 0)
            candidate = nums[i];

        if(nums[i] == candidate)
            count++;
        else
            count--;
    }

    cout << candidate;

    return 0;
}