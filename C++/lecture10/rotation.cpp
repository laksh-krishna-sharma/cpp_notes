#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 5;
    int arr2[n];

    cout<<"enter 5 integer in array : "<<endl;

    for (int idx = 0; idx < n; idx++)
    {
        cin>>arr[idx];
    }
    cout<<"enter number of rotations : ";
    int k;
    cin>>k;
    k%=n;

    int j = 0;

    for (int i = n-k; i < n; i++)
    {
        arr2[j++]=arr[i];
    }
    for (int i = 0; i <= k; i++)
    {
        arr2[j++]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;    
}