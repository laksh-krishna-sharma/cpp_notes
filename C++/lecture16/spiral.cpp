#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

void spiralOrder(vector<vector<int>>& matrix) {
    
    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;

    int dir = 0;

    while (left <= right && top <= bottom) {
        if (dir == 0) {
            // left to right 
            for (int col = left; col <= right; col++) {
                cout << matrix[top][col] << " ";
            }
            top++;
        }

        else if (dir == 1) {
            // top to bottom
            for (int row = top; row <= bottom; row++) {
                cout << matrix[row][right] << " ";
            }
            right--;
        }

        else if (dir == 2) {
            // right to left
            for (int col = right; col >= left; col--) {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }

        else {
            // bottom to top
            for (int row = bottom; row >= top; row--) {
                cout << matrix[row][left] << " ";
            }
            left++;
        }

        // dir = 0,1,2,3
        dir = (dir + 1) % 4;
    }
}

int main() {
    
    int n, m;
    cout << "enter number of rows: ";
    cin >> n;
    cout << "enter number of columns: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "(" << i << "," << j << ") : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    spiralOrder(matrix);

    cout<<endl;

    return 0;
}
