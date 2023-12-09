#include<iostream>
using namespace std;

int answer(int arr1[],int arr2[]){

    int ans[12];
    int i = 0,j = 0,k = 0;
    while (i<4 || j<8)
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
    for (int l = 0; l < 12; l++)
    {
        cout<<ans[l]<<" ";
    }
    
}

int main(){
    
    int arr1[] = {0,1,3,4};
    int arr2[] = {5,6,7,8,9,10,11,23};

    return 0;
}