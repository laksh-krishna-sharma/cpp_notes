#include<iostream>
using namespace std;

int main()
{
    char array[5];

    for (int idx = 0; idx < 5; idx++)
    {
        cin>>array[idx];
    }

    cout<<"vovels are : "<<endl;

    int i = 0;
    while (i<5)
    {
        cout<<array[i]<<endl;
        i++;
    }
    

    return 0;
    
}