#include<iostream>
#include<vector>
using namespace std;

void prefixsum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i-1];
    }

}

int main()
{
    int size;
    cout<<"enter size : ";
    cin>>size;

    vector<int> v;

    cout<<"enter elements : "<<endl;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    prefixsum(v);

    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";        
    }
    cout<<endl;


    return 0;
}