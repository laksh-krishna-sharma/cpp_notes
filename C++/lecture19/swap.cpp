#include <array>
#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10;
    int y = 20;

    cout << x << " " << y << endl;

    int *p1 = &x;
    int *p2 = &y;

    swap(p1, p2);

    cout << x << " " << y << endl;

    return 0;
}