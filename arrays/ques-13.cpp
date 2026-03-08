/*13.	Merge Intervals: 
Problem: Given a collection of intervals, merge all overlapping intervals. 
Input: Intervals: [[1,3],[2,6],[8,10],[15,18]] 
Output: [[1,6],[8,10],[15,18]] 

*/

#include <iostream>
#include <algorithm>
using namespace std;

struct Interval {
    int start, end;
};

bool compare(Interval a, Interval b) {
    return a.start < b.start;
}

int main() {

    int n;
    cin >> n;

    Interval arr[100];

    for(int i=0;i<n;i++)
        cin >> arr[i].start >> arr[i].end;

    sort(arr, arr+n, compare);

    Interval result[100];
    int index = 0;

    result[index] = arr[0];

    for(int i=1;i<n;i++) {

        if(arr[i].start <= result[index].end) {

            if(arr[i].end > result[index].end)
                result[index].end = arr[i].end;

        }
        else {
            index++;
            result[index] = arr[i];
        }
    }

    for(int i=0;i<=index;i++)
        cout << "[" << result[i].start << "," << result[i].end << "] ";

    return 0;
}