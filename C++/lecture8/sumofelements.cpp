#include<iostream>
using namespace std;

int main()
{
    int array[] = {16,3,20,20};

    int sum = 0,idx = 0;
    while (idx<=3)
    {
        sum = sum + array[idx];
        idx++;
    }    

    cout<<"sum of elements is : "<<sum;

    return 0;
}