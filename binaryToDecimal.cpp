#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNumber){
    int ans = 0, pow = 1;
    while(binaryNumber > 0){
        int remainder = binaryNumber % 10;
        binaryNumber /= 10;
        ans += (remainder*pow);
        pow *= 2;
    }
    return ans;
}
int main(){
    int number = 1011;
    cout<<binaryToDecimal(number);
    return 0;
}