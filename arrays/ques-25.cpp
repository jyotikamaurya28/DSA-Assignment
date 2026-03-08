/*25.	Intersection of Two Arrays 
Intersection of Two Arrays 
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order. 
 
Example 1: 
Input: nums1 = [1,2,2,1], nums2 = [2,2] Output: [2] 
*/

#include <iostream>
using namespace std;

int main() {

    int n1,n2;
    cin >> n1;

    int nums1[100];
    for(int i=0;i<n1;i++)
        cin >> nums1[i];

    cin >> n2;

    int nums2[100];
    for(int i=0;i<n2;i++)
        cin >> nums2[i];

    for(int i=0;i<n1;i++){

        for(int j=0;j<n2;j++){

            if(nums1[i] == nums2[j]){

                bool found = false;

                for(int k=0;k<i;k++){
                    if(nums1[k] == nums1[i]){
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << nums1[i] << " ";

                break;
            }

        }
    }

    return 0;
}