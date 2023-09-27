#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k<= (num-i); k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < ((2*i)-1); j++)
        {
            char ch = (char)('A' + j);
            cout<<ch;
        }
        
        cout<<endl;
    }
    for (int i = 6; i <= (num*2)-1; i++)
    {
        for (int k = 1; k<= (i-num); k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < ((2*(2*num-i))-1); j++)
        {
            char ch = (char)('A' + j);
            cout<<ch;
        }
        
        cout<<endl;
    }
    
    return 0;
}