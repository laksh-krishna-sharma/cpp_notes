#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    float y = 2.332;

    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr << endl;

    float *ptr2 = &y;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;

    return 0;
}
