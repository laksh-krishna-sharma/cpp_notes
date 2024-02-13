#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int x = 5;
    double y = 5.5;

    int *p1 = &x;
    double *p2 = &y;

    cout << sizeof(x) << " " << sizeof(y) << endl;

    cout << p1 << " " << (p1 + 1) << endl; // adding 1 unit equivalent of size of type [p1(hexadecimal) + 4]
    cout << p2 << " " << (p2 + 2) << endl; // adding 2 unit equivalent of size of type [p2(hexadecimal) + (8 * 2)]

    cout << p2 << " " << (p2 - 3) << endl; // subtracting 3 unit equivalent of size of type [p2(hexadecimal) - (8 * 3)]

    return 0;
}