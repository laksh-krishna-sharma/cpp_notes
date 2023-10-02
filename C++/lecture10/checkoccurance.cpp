#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"enter size of array : ";
    int n;
    cin>>n;

    vector<int> v(n);
    cout<<"enter elements in array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    const int N = 1e5 + 10;
    vector<int> freq(N,0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    cout<<"enter number of quries : ";
    int Q;
    cin>>Q;

    while (Q--)
    {
        cout<<"enter element : ";
        int qele;
        cin>>qele;

        cout<<"frequency of element : "<<freq[qele]<<endl;
    }

    return 0;
}