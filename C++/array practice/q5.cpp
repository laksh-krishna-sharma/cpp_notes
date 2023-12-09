#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int x = 9;
    
    int n = 7;
    int i = 0;
    int j = n-1;    
    int ans = 0;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        {
            ans++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    
    cout<<ans;
    
    return 0;
}