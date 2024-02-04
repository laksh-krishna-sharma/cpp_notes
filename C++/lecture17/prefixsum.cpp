#include<iostream>
#include<vector>
using namespace std;

int prefixSum(vector<vector<int>>& v, int l1, int l2, int r1, int r2) {
    // Calculate prefix sum
    vector<vector<int>> ans = v;

    // Calculate prefix sum along rows
    for (int i = 0; i < v.size(); i++) {
        for (int j = 1; j < v[i].size(); j++) {
            ans[i][j] += ans[i][j - 1];
        }
    }

    // Calculate prefix sum along columns
    for (int j = 0; j < v[0].size(); j++) {
        for (int i = 1; i < v.size(); i++) {
            ans[i][j] += ans[i - 1][j];
        }
    }

    // Calculate the final sum
    int sum = ans[l2][r2];
    if (l1 > 0) sum -= ans[l1 - 1][r2];
    if (r1 > 0) sum -= ans[l2][r1 - 1];
    if (l1 > 0 && r1 > 0) sum += ans[l1 - 1][r1 - 1];

    return sum;
}

int main() {
    // Input the Array
    int r, c;
    cout << "Enter rows: ";
    cin >> r;
    cout << "Enter columns: ";
    cin >> c;

    vector<vector<int>> v(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "(" << i << "," << j << ") : ";
            cin >> v[i][j];
        }
        cout << endl;
    }

    int l1, l2, r1, r2;
    cout << "Enter l1: ";
    cin >> l1;
    cout << "Enter r1: ";
    cin >> r1;
    cout << "Enter l2: ";
    cin >> l2;
    cout << "Enter r2: ";
    cin >> r2;

    int result = prefixSum(v, l1, l2, r1, r2);
    cout << "Result: " << result << endl;

    return 0;
}