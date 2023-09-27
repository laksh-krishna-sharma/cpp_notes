#include <iostream>
using namespace std;
int main()
{
    int CP,SP, amt; 

    cout<<"Enter cost price: ";
    cin>>CP;

    cout<<"Enter selling price: ";
    cin>>SP;

    if(SP > CP)
    {
        amt = SP - CP; 
        cout<<"Profit = "<<amt;
    }

    else if(CP > SP)
    {
        amt = CP - SP; //Calculate Loss
        cout<<"Loss = "<<amt;
    }

    else
    {
        cout<<"No Profit No Loss."; // Neither profit nor loss
    }
    
    
    return 0;
}