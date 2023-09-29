#include<iostream>
using namespace std;

int main()
{
    int array[] = {6,7,83,1};

    int Key = 7, ans = -1;
    int size = sizeof(array)/sizeof(array[0]);

    for (int idx = 0; idx < size; idx++)
    {
        if (Key == array[idx] )
        {
            ans = idx;
            break;
        }
    }
    cout<<"Index of Key is : "<<ans;

    return 0;
}