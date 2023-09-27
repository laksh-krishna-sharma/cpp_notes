#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a odd number : ";
    cin>>num;

    if (num%2 != 0 )
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num ; j++)
            {
                if (i==j || i+j == num-1)
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
        cout<<"Enter only odd number";
    }

    return 0;
}