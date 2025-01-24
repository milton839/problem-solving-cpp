#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 0, 25, 8, 5, 25, 6};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}