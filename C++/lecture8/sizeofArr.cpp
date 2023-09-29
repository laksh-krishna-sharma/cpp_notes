#include<iostream>
using namespace std;

int main()
{
    int array[] = {1,2,3,4};
    cout<<"size of array is : "<<sizeof(array)<<endl;
    cout<<"length of array is : "<<sizeof(array)/sizeof(array[0]);

    return 0;
}