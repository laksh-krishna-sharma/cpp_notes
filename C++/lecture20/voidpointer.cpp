#include <bits/stdc++.h>
using namespace std;

// void/genric pointer ek aisa special pointera ho ta hai jiss mai kisi bhi trpe ka data-type ka address ka store kr sak ta hai
int main(){
    float x = 2.5;
    int y = 10;
    
    void *ptr = &x;
    cout << ptr << endl;

    ptr = &y;
    cout << ptr << endl;

//  but void pointer ko derefrence nahi kr sak te but derefrence kr ne ke liya type cast kr sak te hai
    int *intptr = (int *)ptr;
    cout << *intptr << endl;

    return 0;
}