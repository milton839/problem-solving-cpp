#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        char ch = 'A' + i;
        for (int j = 0; j<n-i; j++)
        {
            cout<<ch;
        }

        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Number 1st part
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
        }

        //Number 2nd part
        for (int j = i; j > 0; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    
    return 0;
}