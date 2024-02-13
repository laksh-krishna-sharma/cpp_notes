#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {5,4, 6, 10, 15 };

    int (*p)[5] = &arr;

    cout << p << " " << arr << " " << *p << " " << *arr << endl;
    
    return 0;

}