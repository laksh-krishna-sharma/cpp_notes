#include<iostream>
using namespace std;

int main(){
    int arr[] = {-5,-4,1,2,3};

    int result[5];
    int n = 5;
    int i = 0;
    int j = n-1;
    int k = n-1;

    while (i<=j)
    {
        if (arr[i]*arr[i]>arr[j]*arr[j])
        {
            result[k] = arr[i]*arr[i];
            i++;
        }
        else
        {
            result[k] = arr[j]*arr[j];
            j--;
        }
        k--;
    }
    int l = 0;
    while (l<5)
    {
        cout<<result[l]<<" ";
        l++;
    }

    return 0;
}