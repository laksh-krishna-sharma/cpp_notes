#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 5; i++) 
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int idx = 0;
    while (idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
    

    return 0;
}