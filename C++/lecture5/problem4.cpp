#include<iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout<<"Enter last digit os series : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        if (i%2!=0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }
    cout<<"Sum of series is : "<<sum;

    return 0;
}