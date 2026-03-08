/*14.	Matrix Identity Check: 
Problem: Write a program to check if two given matrices are identical. 
Input: 
Matrix A: [[1,1,1,1], [2,2,2,2], [3,3,3,3], [4,4,4,4]] 
Matrix B: [[1,1,1,1], [2,2,2,2], [3,3,3,3], [4,4,4,4]] 
Output: 
Matrices are identical 
*/

#include <iostream>
using namespace std;

int main() {

    int rows, cols;

    cin >> rows >> cols;

    int A[100][100], B[100][100];

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin >> A[i][j];

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin >> B[i][j];

    bool identical = true;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){

            if(A[i][j] != B[i][j]){
                identical = false;
                break;
            }

        }
    }

    if(identical)
        cout << "Matrices are identical";
    else
        cout << "Matrices are not identical";

    return 0;
}