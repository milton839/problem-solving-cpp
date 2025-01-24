#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // squre quadrilateral
    // Top part
    for (int i = 0; i < n; i++)
    {
        // Space & star
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        // Space & star
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    // Bottom part
    for (int i = 0; i < n - 1; i++)
    {
        // space & star
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        // space & star
        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - 2 - i) - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}