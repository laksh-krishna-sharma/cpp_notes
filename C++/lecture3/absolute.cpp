#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a integer to find absolute value : ";
    cin>>num;

    if (num<0)
    {
        num = num*(-1);
        cout<<"Absolute value of given number is : "<<num<<endl;
    }
    else
    {
        cout<<"Absolute value of given number is : "<<num<<endl;
    }

    return 0;
}