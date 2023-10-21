#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int sz;
    cout<<"enter size : ";
    cin>>sz;

    vector<int> v(sz+1,0);

    cout<<"enter elements : "<<endl;

    for (int i = 1; i < sz+1; i++)
    {
        cin>>v[i];
    }
    for (int i = 1; i < sz+1; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    for (int i = 1; i < sz; i++)
    {
        v[i] += v[i-1];
    }

    int qry;
    cout<<"enter number of quries : ";
    cin>>qry;

    while (qry--)
    {
        int st,ed;
        cout<<"enter start number :";
        cin>>st;
        cout<<"enter end number : ";
        cin>>ed;

        int ans = 0;
        ans = v[ed]-v[st-1];
        cout<<endl<<"required answer : "<<ans<<endl<<endl;
    }
    
    return 0;
}