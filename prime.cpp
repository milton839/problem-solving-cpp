#include<iostream>
using namespace std;

int prime(int num){
    bool bv = true;
    if (num == 0 || num == 1 || num < 0)
    {
        bv = false;
    }
    
    for (int i = 2; i*i < num; i++)
    {
        if (num%i==0)
        {
            bv = false;
        }
    }
    return bv;
}
int main(){
    int num = 11;
    if (prime(num) == 1)
    {
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    
    return 0;
}