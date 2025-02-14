#include <bits/stdc++.h>
using namespace std;

// Binary Exponentiation(Compute=>(x^n)
//Complexity=>O(logn)
double powerExponentiation(int x, int n)
{
    // Corner Cases
    if (n == 0 || x == 1 || (x == -1 && n % 2 == 0))
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binForm = n;
    double ans = 1;

    if (n < 0)
    {
        x = 1.0 / x;
        binForm = -binForm;
    }

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << fixed << setprecision(2) << powerExponentiation(x, n);

    return 0;
}