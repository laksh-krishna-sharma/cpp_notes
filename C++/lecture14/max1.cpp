#include<iostream>
#include<vector>
using namespace std;

int Max1Rows(vector<vector<int>> &v){
    int maxOnes = INT16_MIN;
    int maxOnesRows = -1;
    int col = v[0].size();

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int ans = col - j;
                if (ans > maxOnes)
                {
                    maxOnes = ans;
                    maxOnesRows = i;
                }
                break;
            } 
        }
    }
   return maxOnesRows; 
}

int main(){

    int n,m;
    cout<<"enter number rows : ";
    cin>>n;
    cout<<endl;
    cout<<"entre number of column : ";
    cin>>m;
    cout<<endl;

    vector<vector<int>> vec(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"("<<i<<","<<j<<") : ";
            cin>>vec[i][j];
        }
        cout<<endl;
    }

    int ans = Max1Rows(vec);
    cout<<"max ones row : "<<ans<<endl;

    return 0;    
}