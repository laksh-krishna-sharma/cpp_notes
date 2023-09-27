#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a odd number : ";
    cin>>num;

    if (num%2 != 0)
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num ; j++)
            {
                if (i == (num/2))
                {
                    cout<<"*";
                }
                else if (j == (num/2))
                {
                    cout<<"*";
                }
                
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Enter odd number only";
    }
    
    return 0;
}