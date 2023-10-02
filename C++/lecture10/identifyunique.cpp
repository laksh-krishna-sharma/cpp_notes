// methode 1

#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout<<"enter 5 integer in array : "<<endl;

    for (int idx = 0; idx < 5; idx++)
    {
        cin>>arr[idx];
    }

    int uni=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i] != arr[j])
            {
                uni = arr[i];
            }
            else
            {
                continue;
            }
        }
    }
    cout<<"unique numbre in array is : "<<uni<<endl;
    
    return 0;
}

// methode 2
//
// #include<iostream>
// using namespace std;
//
// int main()
// {
//     int arr[5];
//
//     cout<<"enter 5 integer in array : "<<endl;
//
//     for (int idx = 0; idx < 5; idx++)
//     {
//         cin>>arr[idx];
//     }
//
//    
//
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i+1; j < 5; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 arr[i]=arr[j]=-1;
//             }
//             else
//             {
//                 continue;
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//             if (arr[i] != -1)
//             {
//                  cout<<"unique numbre in array is : "<<arr[i]<<endl;
//             }
//             else
//             {
//                 continue;
//             }
//     }
//   
//     return 0;
// }