#include <iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n - 1; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
        {
            cout << " ";
        }
        cout << i;

        if (i > 1) 
        {
            for (int j = 1; j <= 2 * i - 3; j++) {
                cout << " ";
            }
            cout << i;
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++) 
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

