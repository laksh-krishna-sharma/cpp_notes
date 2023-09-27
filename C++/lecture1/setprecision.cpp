#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<fixed << setprecision(3)<<d<<endl;
    cout<<fixed << setprecision(9)<<e<<endl;
    return 0;
}