#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int x = 90;
    
    int n = 7;
    int i = 0;
    int j = n-1;    
    bool ans = false;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        {
            cout<<"YES";
            return 0;
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
    
    cout<<"NO";
    
    return 0;
}