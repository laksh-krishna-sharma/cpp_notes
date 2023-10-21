#include<iostream>
#include<vector>
using namespace std;

bool PrefixsumEqualSufixsum(vector<int> &v)
{
    int tot = 0;
    for (int i = 0; i < v.size(); i++)
    {
        tot += v[i];
    }

    int prf = 0;
    int sxf = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prf += v[i];
        sxf = tot - prf;

        if (prf == sxf)
        {
            return true;
        }
    }

    return false;
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
    
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";        
    }
    cout<<endl;


    cout<<PrefixsumEqualSufixsum(v)<<endl;

    return 0;
}