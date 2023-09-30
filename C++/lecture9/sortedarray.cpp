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

    bool sort = false;

    for (int j = v.size()-1; j >= 0; j--)
    {
        if (v[j-1] < v[j])
        {
           sort = true;
        }
        else
        {
            break;
        }
        
    }

    cout<<"sorted : "<<sort<<endl;


     return 0;
}