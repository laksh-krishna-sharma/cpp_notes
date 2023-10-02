//all elements are not unique

#include<iostream>
using namespace std;

int largestIndex(int arr[] , int size)
{
    int max = INT8_MIN;
    int maxindex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            maxindex = i;
        }
    }

    return maxindex;
}
int main()
{
    int arr[5];

    cout<<"enter 5 integer in array : "<<endl;

    for (int idx = 0; idx < 5; idx++)
    {
        cin>>arr[idx];
    }

    int n =5;
    int idxl = largestIndex(arr,n);
    int lele = arr[idxl];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==lele)
        {
            arr[i]=-1;
        }
    }
    

    idxl = largestIndex(arr,n);
    cout<<"second largest element is : "<<arr[idxl]<<endl;    

    return 0;
}