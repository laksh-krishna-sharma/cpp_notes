#include<iostream>
#include<vector>
using namespace std;

int fact(int num){
    if (num == 0 || num == 1) 
    {
        return 1;
    }
    else 
    {
        return num * fact(num - 1);
    }
}

int comb(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i+1);
        for (int j = 0; j < i+1; j++)
        {
            pascal[i][j]=comb(i,j);
        }
    }

    return pascal;
}

int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;

    vector<vector<int>> ans = pascalTriangle(n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}