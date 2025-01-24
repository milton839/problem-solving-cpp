#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {2, 10, 3, 9, 1, 7};
    int size = sizeof(arr)/sizeof(int);
    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}