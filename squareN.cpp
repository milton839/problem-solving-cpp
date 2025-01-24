#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    //upper
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

         // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //bottom
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j < n-i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < n-i; j++)
        {
            cout << " ";
        }
        

         // star
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}