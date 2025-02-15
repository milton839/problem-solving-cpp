#include<bits/stdc++.h>
using namespace std;

void printWord(stringstream& ss){
    string word;
    if (ss >> word)
    {
        cout<<word<<endl;
        printWord(ss);
    }
    
}

void printReverseWord(stringstream& ss){
    string word;
    if (ss >> word)
    {
        printReverseWord(ss);
        cout<<word<<endl;
    }
    
}

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);

    // printWord(ss);
    printReverseWord(ss);
    return 0;
}