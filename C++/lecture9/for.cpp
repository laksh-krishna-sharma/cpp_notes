#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    // to do it in same way in which array is getting input we need to pre-define the size vector<int> v(5);

    for (int i = 0; i < 5; i++) 
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    return 0;
}