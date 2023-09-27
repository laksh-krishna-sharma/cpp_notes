#include<iostream>
using namespace std;

int main()
{
    int num,power = 1,dec = 0;

    cout<<"Enter a binary number : ";
    cin>>num;

    while (num>0)
    {
        int lastdigit = num % 10;
        dec += (lastdigit*power);
        power *= 2;
        num /= 10;
    }

    cout<<"Decimal conversion of number is : "<<dec;

    return 0;
}