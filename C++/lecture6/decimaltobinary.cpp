#include<iostream>
using namespace std;

int main()
{
    int num,power = 1,bin = 0;

    cout<<"Enter a decimal number : ";
    cin>>num;

    while (num>0)
    {
        int paritydigit = num % 2;
        bin += (paritydigit*power);
        power *= 10;
        num /= 2;
    }

    cout<<"Binary conversion of number is : "<<bin;

    return 0;
}