#include <bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = NULL; 
    {
        int x = 10;
        ptr = &x;
    }
    // ptr ko jo value assigne ki hai wo block ke andar hai to bhr wo ab kisi random variable par point kr raha hai isa dangling pointer bol te hai 

    cout << ptr << endl;

    return 0;
}