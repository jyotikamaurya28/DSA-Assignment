/*10.	Problem Statement – 
You’re given an array of integers, print the number of times each integer has occurred in the array. 
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int visited[n] = {0};

    cout << "Enter elements: ";

    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<n;i++) {

        if(visited[i] == 1)
            continue;

        int count = 1;

        for(int j=i+1;j<n;j++) {

            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }

        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}