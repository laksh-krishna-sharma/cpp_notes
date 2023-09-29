#include<iostream>
using namespace std;

int main()
{
    int array[] = {6,7,83,1};

    int max = array[0];
    int size = sizeof(array)/sizeof(array[0]);

    for (int idx = 0; idx < size; idx++)
    {
      if (array[idx] > max)
      {
        max = array[idx];
      }
        
    }

    cout<<"largest element is : "<<max;

    return 0;
}