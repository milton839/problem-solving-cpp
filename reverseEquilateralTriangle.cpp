#include<iostream>
using namespace std;

void reverseEqualTriangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main(){
    int n = 5;
    reverseEqualTriangle(n);
    return 0;
}