//all elements are unique

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

    int idxl = largestIndex(arr,5);
    arr[idxl]=-1;

    idxl = largestIndex(arr,5);
    cout<<"second largest element is : "<<arr[idxl]<<endl;    

}