#include<iostream>
using namespace std;

int decimalToBinary(int decimalNumber){
    int ans = 0, pow = 1;

    while (decimalNumber > 0)
    {
        int remainder = decimalNumber % 2;
        decimalNumber /= 2;

        ans +=(remainder*pow);
        pow *=10;
    }
    return ans;
}
int main(){
    int number = 50;
    // cout<<decimalToBinary(number);
    for (int i = 0; i <= 50; i++)
    {
        cout<<decimalToBinary(i)<<endl;
    }
    
    return 0;
}