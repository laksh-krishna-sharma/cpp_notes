#include<iostream>
#include<vector>
using namespace std;

void sortEvenAndOdd(vector<int> &v)
{
    int leftPt=0;
    int rightPt=v.size()-1;

    while (leftPt<rightPt)
    {
        if (v[leftPt]%2!=0 && v[rightPt]%2==0)
        {
            int swap;
            swap=v[leftPt];
            v[leftPt++]=v[rightPt];
            v[rightPt--]=swap;
        }
        if (v[leftPt]%2==0)
        {
            leftPt++;
        }
        if (v[rightPt]%2!=0)
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

    cout<<"enter numbers : "<<endl;
    for (int i = 0; i < siz; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortEvenAndOdd(v);

    for (int i = 0; i < siz; i++)
    {
        cout<<v[i]<<" ";        
    }
    cout<<endl;

    return 0;
}