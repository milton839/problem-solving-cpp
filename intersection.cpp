#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 7, 9, 30, 55, 22};
    int arr2[] = {2, 4, 6, 7, 9, 22, 23, 35, 30};
    int size = sizeof(arr)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr[i] == arr2[j])
            {
                cout<< arr[i]<<" ";
            }
            
        }
        
    }
    
    return 0;
}