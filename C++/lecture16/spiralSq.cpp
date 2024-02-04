#include <cstdlib>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> spiralSq(int n) {

    vector<vector<int>> matrix(n, vector<int>(n));

    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;

    int dir = 0;
    int val = 1;

    while (left <= right && top <= bottom) {
        if (dir == 0) {
            // left to right 
            for (int col = left; col <= right; col++) {
                matrix[top][col] = val++;
            }
            top++;
        }

        else if (dir == 1) {
            // top to bottom
            for (int row = top; row <= bottom; row++) {
                matrix[row][right] = val++;
            }
            right--;
        }

        else if (dir == 2) {
            // right to left
            for (int col = right; col >= left; col--) {
                matrix[bottom][col] = val++;
            }
            bottom--;
        }

        else {
            // bottom to top
            for (int row = bottom; row >= top; row--) {
                matrix[row][left] = val++;
            }
            left++;
        }

        // dir = 0,1,2,3
        dir = (dir + 1) % 4;
    }

    return matrix;
}

int main() {
    
    int n;
    cout << "enter number of rows and column : ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    matrix = spiralSq(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }    

    cout<<endl;

    return 0;
}