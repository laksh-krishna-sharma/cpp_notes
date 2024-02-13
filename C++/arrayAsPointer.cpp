#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {5,4, 6, 7};

    int *ptr = &arr[0];

    // the name of array (arr) is an pointer to its first element (arr[0])
    cout << ptr << " " << arr << " " << *ptr << " " << *arr << endl;

    for (int i = 0; i < 4; i++) {
        cout << *(arr + i) << endl;
    }
    return 0;

}