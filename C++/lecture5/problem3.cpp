#include<iostream>
using namespace std;

int main()
{
    int num,a;
    int b = 0;

    cout<<"Enter a number : ";
    cin>>num;

    while (num>0)
    {
        a = num % 10;
        num = num / 10;
        b = (b*10) + a;
    }
    cout<<"Reverse of number is : "<<b;

    return 0;
}