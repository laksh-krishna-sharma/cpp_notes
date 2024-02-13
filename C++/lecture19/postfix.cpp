#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[2] = {5,4};

    int *ptr = &arr[0];

    cout << *ptr++ << endl; //5

    cout << arr[0] << " " << *ptr << endl; // 5 4

    cout << (*ptr)++ << endl; //4

    cout << arr[0] << " " << arr[1] << endl; // 5 5

    return 0;

}