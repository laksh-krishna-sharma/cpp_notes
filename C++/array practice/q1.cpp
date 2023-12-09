#include<iostream>
using namespace std;

int main(){
    
    int arr1[] = {0,2,3,4};
    int arr2[] = {1,2,5,7,8,9,11,23};

    int ans[12];
    int i = 0,j = 0,k = 0;
    while (i<4 && j<8)
    {
        if (arr1[i]>arr2[j])
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
    }
    
    return 0;
}