#include<iostream>
using namespace std;

int main()
{
    int num;
    int digit = 0;

    cout<<"Enter a number : ";
    cin>>num;

    while (num>0)
    {
        digit++;
        num = num/10;
    }
    cout<<"Number of digits are : "<<digit;
    
    return 0;
}