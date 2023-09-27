#include<iostream>
using namespace std;

int main()
{
    int num,a;
    int total = 0;

    cout<<"Enter a number : ";
    cin>>num;

    while (num>0)
    {
        a = num % 10;
        num = num / 10;
        total = total + a;
    }
    cout<<"Sum of digits of entered number : "<<total;
}