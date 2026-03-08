/*Array-Based 
8.	Matrix Rotation by 90 Degrees: 
Rotate a 2D matrix by 90 degrees clockwise. 
Input: Matrix: [[1, 2, 3], [4, 5, 6], [7, 8, 9]] 
Output:Matrix:[[7, 4, 1], [8, 5, 2], [9, 6, 3]] 
Explanation: The matrix is rotated 90 degrees clockwise. 
 
*/

#include <iostream>
using namespace std;

int main() {

    int n = 3;
    int matrix[3][3];

    cout << "Enter matrix elements:" << endl;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> matrix[i][j];

    // Transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse rows
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-j-1];
            matrix[i][n-j-1] = temp;
        }
    }

    cout << "Rotated Matrix:" << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}