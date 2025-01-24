#include <iostream>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void print2(int n)
{

    int number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

// A
// AB
// ABC
// ABCD
// ABCDE
void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// ABCDE
// ABCD
// ABC
// AB
// A
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// ABCDE
// ABCD
// ABC
// AB
// A
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + n - 1 - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// A
// BB
// CCC
// DDDD
// EEEEE
void print6(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < i + 1; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

// A
// BB
// CCC
// DDDD
// EEEEE
void print7(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (char j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

void print8(int n)
{

    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        cout << endl;
    }
}

//     1
//    121
//   12321
//  1234321
// 123454321

void print9(int n)
{

    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        int num = 1;
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << num;
            if (j <= breakpoint)
                num++;
            else
                num--;
        }

        cout << endl;
    }
}


// E 
// D E 
// C D E 
// B C D E 
// A B C D E 

void print10(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - 1;
        for (char ch = 'A' + n - 1 - i; ch <= 'A' + n - 1; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n = 5;
    print10(n);

    return 0;
}