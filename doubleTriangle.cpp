#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }

        //Space
        for (int j = 0; j < space; j++)
        {
            cout<<" ";
        }
        for (int j = i; j > 0; j--)
        {
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
    
    return 0;
}