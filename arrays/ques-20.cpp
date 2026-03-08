/*Rotate Array:- 
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative. 
Example 1: 
Input: nums = [1,2,3,4,5,6,7], k = 3 Output: [5,6,7,1,2,3,4] */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n,k;
    cin >> n;

    int nums[100];

    for(int i=0;i<n;i++)
        cin >> nums[i];

    cin >> k;

    k = k % n;

    reverse(nums, nums+n);
    reverse(nums, nums+k);
    reverse(nums+k, nums+n);

    for(int i=0;i<n;i++)
        cout << nums[i] << " ";

    return 0;
}