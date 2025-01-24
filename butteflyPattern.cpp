#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    //top part
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // bottom Part
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}