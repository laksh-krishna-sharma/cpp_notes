#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rotatedMatrix(vector<vector<int>> &v){
    // transpose
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j],v[j][i]);
        }
        
    }
    // reverse
    for (int i = 0; i < v.size(); i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
    
    return 0;
}

int main(){
    int n;
    cout<<"enter number rows and column : ";
    cin>>n;
    cout<<endl;

    vector<vector<int>> vec(n,vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"("<<i<<","<<j<<") : ";
            cin>>vec[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }cout<<endl;

    int ans = rotatedMatrix(vec);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }cout<<endl;

    return 0;    
}