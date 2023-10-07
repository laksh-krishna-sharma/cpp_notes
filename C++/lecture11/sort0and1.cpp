#include<iostream>
#include<vector>

using namespace std;

void sortZerosAndOnes(vector<int> &v)
{
    int Zeros_count = 0;

    for(int ele:v)
    {
        if (ele==0)
        {
            Zeros_count++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i<Zeros_count)
        {
            v[i]=0;
        }
        else
        {
            v[i]=1;
        }
    }
    
}

int main()
{
    cout<<"enter size : ";
    int siz;
    cin>>siz;

    vector<int> v;

    cout<<"enter 0's and 1's : "<<endl;
    for (int i = 0; i < siz; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortZerosAndOnes(v);

    for (int i = 0; i < siz; i++)
    {
        cout<<v[i]<<" ";        
    }
    cout<<endl;

    return 0;
}