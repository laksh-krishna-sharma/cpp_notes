#include<iostream>
using namespace std;

int main()
{
    int n,first,second,third,sum;
    n = 524;

    first = n/100;
    n = n%100;

    second = n/10;
    
    third = n%10;
    
    sum = first + second + third;

    cout<<"Sum of all digits of a 3 digit number : "<<sum<<endl;

    return 0;
}