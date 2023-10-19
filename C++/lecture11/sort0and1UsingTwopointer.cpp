#include<iostream>
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v)
{
    int leftPt=0;
    int rightPt=v.size()-1;

    while (leftPt<rightPt)
    {
        if (v[leftPt]==1 && v[rightPt]==0)
        {
            v[leftPt++]=0;
            v[rightPt--]=1;
        }
        if (v[leftPt]==0)
        {
            leftPt++;
        }
        if (v[rightPt]==1)
        {
            rightPt--;
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