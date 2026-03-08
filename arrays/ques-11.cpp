/*. Problem Statement – 
Write the code to traverse a matrix in a spiral format. Sample Input: 
5 4 
1  2  3  4 
5  6  7  8 
9 10 11 12 
13 14 15 16 
17 18 19 20 Output: 
1 2 3 4 8 12 16 20 19 18 17 13 9 5 6 7 11 15 12 14 10 

*/

#include <iostream>
using namespace std;

int main() {

    int rows, cols;
    cin >> rows >> cols;

    int matrix[100][100];

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin >> matrix[i][j];

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while(top <= bottom && left <= right) {

        for(int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;

        for(int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }

    return 0;
}