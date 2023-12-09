#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int x = 5;
    
    int n = 7;
    int i = 0;
    int j = 1;    
    while(i<n && j<n)
    {
        if(arr[j]-arr[i]==x)
        {
            cout<<"YES";
            return 0;
        }
        else if(arr[j]-arr[i]<x)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    
    cout<<"NO";
    
    return 0;
}