#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maxWater = 0;

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int size = sizeof(height) / sizeof(int);

    // Brute Force Approach
    //  for (int i = 0; i < size; i++)
    //  {
    //      for (int j = i + 1; j < size; j++)
    //      {
    //          int width = j - i;
    //          int minHeight = min(height[i], height[j]);
    //          int area = width * minHeight;
    //          maxWater = max(maxWater, area);
    //      }
    //  }

    int lp = 0, rp = size - 1;
    while (lp < rp)
    {
        
        int width = rp - lp;
        int minHeight = min(height[lp], height[rp]);
        int currentWater = width * minHeight;
        maxWater = max(maxWater, currentWater);
        cout<<height[lp]<<" "<<height[rp]<<endl;
        height[lp] < height[rp] ? lp++ : rp--;
    }
    cout << maxWater;
    return 0;
}