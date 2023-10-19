#include<iostream>
#include<vector>
using namespace std;

void sortSquared(vector<int> &v)
{
    int leftPt=0;
    int rightPt=v.size()-1;
    vector<int> ans;

    while (leftPt<=rightPt)
    {
        if (abs(v[leftPt])<abs(v[rightPt]))
        {
            ans.push_back(v[rightPt]*v[rightPt]);
            rightPt--;
        }
        else
        {
            ans.push_back(v[leftPt]*v[leftPt]);
            leftPt++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<ans[i]<<" ";        
    }
    cout<<endl;    
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

    sortSquared(v);

    return 0;
}