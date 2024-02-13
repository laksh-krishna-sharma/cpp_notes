#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[2] = {7,9};

    int *ptr = &arr[0];
    int *ptr2 = &arr[0];

    cout << *++ptr << endl; // 9

    cout << arr[0] << " " << arr[1] << endl; // 7 8

    cout << ++*ptr2 << endl; // 8

    cout << arr[0] << " " << arr[1] << endl; // 8 9

    return 0;

}