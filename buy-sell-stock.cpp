#include <bits/stdc++.h>
using namespace std;

int main()
{
    int price[] = {7, 1, 5, 3, 6, 4};

    int size = sizeof(price) / sizeof(int);

    int bestBuy = price[0];
    int mp = 0;

    for (int i = 1; i < size; i++)
    {
        if (price[i] > bestBuy)
        {
            mp = max(mp, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }

    cout<<bestBuy<<endl;
    cout<<mp<<endl;

    return 0;
}