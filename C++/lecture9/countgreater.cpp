#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for (int i = 0; i < v.size(); i++) 
    {
        cin>>v[i];
    }
    
    cout<<"enter x : ";
    int x;
    cin>>x;

    int sum = 0;
    for (int j = v.size()-1; j >= 0; j--)
    {
        if (v[j] > x)
        {
           sum++;
        }
    }
    cout<<sum<<endl;

     return 0;
}