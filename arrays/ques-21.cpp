/*. Maximum Product Subarray:- 
Given an integer array nums, find a subarray that has the largest product, and return the product. The test cases are generated so that the answer will fit in a 32-bit integer. 
Example 1: 
Input: nums = [2,3,-2,4] 
Output: 6 
Explanation: [2,3] has the largest product 6. 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int nums[100];

    for(int i=0;i<n;i++)
        cin >> nums[i];

    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for(int i=1;i<n;i++){

        if(nums[i] < 0)
            swap(maxProd, minProd);

        maxProd = max(nums[i], nums[i] * maxProd);
        minProd = min(nums[i], nums[i] * minProd);

        result = max(result, maxProd);
    }

    cout << result;

    return 0;
}