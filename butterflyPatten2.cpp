#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int spaces = 2*n -2;
    for (int i = 1; i <= 2*n-1; i++)
    {
        //star
        int stars = i;
        if(i > n) stars = 2*n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }

        //space
        
        for (int j = 1; j <= spaces; j++)
        {
            cout<<" ";
        }
        if(i<n) spaces-=2;
        else spaces+=2;

        //star
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}