#include<iostream>
using namespace std;

int main(){

    int arr1[2][2]={{1,2},{3,4}};
    int arr2[2][2]={{5,6},{7,8}};

    int ans[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ans[i][j]=0;
            for (int k = 0; k < 2; k++)
            {
                ans[i][j]=ans[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }    
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}