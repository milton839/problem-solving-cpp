#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Product of array except self
    // input->[1, 2, 3, 4]
    // output->[24, 12, 8, 6]

    // For Brute force algorithm...Time Complexity->O(n^2)
    // int nums[] = {1, 2, 3, 4};
    // int size = sizeof(nums) / sizeof(int);
    // int ans[size];

    // for (int i = 0; i < size; i++)
    // {
    //     ans[i] = 1;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (i != j)
    //         {
    //             ans[i] *= nums[j];
    //         }
    //     }
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<ans[i]<<endl;
    // }

    // Optimal-01 TC->O(n), SC->O(n)
    // vector<int> nums = {1, 2, 3, 4};
    // int n = nums.size();
    // vector<int> ans(n, 1);
    // vector<int> prefix(n, 1); //sc
    // vector<int> suffix(n, 1); //sc

    // // Prefix
    // for (int i = 1; i < n; i++)
    // {
    //     prefix[i] = prefix[i - 1] * nums[i - 1];
    // }

    // // suffix
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     suffix[i] = suffix[i + 1] * nums[i + 1];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     ans[i] = prefix[i] * suffix[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<ans[i]<<endl;
    // }

    // Optimal-02....TC->O(n)....SC->O(1)
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n, 1);

    // Prefix
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Suffix
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}