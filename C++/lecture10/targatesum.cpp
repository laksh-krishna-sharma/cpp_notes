#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout<<"enter 5 integer in array : "<<endl;

    for (int idx = 0; idx < 5; idx++)
    {
        cin>>arr[idx];
    }

    cout<<"enter targate sum : ";
    int tsum,sum=0;
    cin>>tsum;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i] + arr[j] == tsum)
            {
                sum = sum + 1;
            }
            else
            {
                continue;
            }
        }
    }
    cout<<"numbre of targate sum pairs : "<<sum<<endl;
    
    return 0;
}