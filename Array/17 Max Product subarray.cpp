// Approach 1 (Brute force approach)
#include <bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int> &nums) // approach 1
{
    int result = INT_MIN;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int prod = 1;
            for (int k = i; k <= j; k++)
            {
                prod *= nums[k];
                result = max(result, prod);
            }
        }
    }
    return result;
}

int maxProductSubArrayy(vector<int> &nums) // approach 2
{
    int result = nums[0];
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int p = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            result = max(result, p);
            p *= nums[j];
        }
        result = max(result, p);
    }
}

// approach 3
int maxProductSubArrayyy(vector<int> &nums)
{
    int n = nums.size();
    int pre = 1, suff = 1;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suff == 0)
            suff = 1;
        pre *= nums[i];
        suff *= nums[n - i - 1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
}

// approach 4 (Kadane's algorithm)
int maxProductSubArrayyyy(vector<int> &nums)
{
    int prod1 = nums[0], prod2 = nums[0], result = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        int temp = max({nums[i], prod1 * nums[i], prod2 * nums[i]});
        prod2 = min({nums[i], prod1 * nums[i], prod2 * nums[i]});
        prod1 = temp;

        result = max(result, prod1);
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray: " << maxProductSubArray(nums);
    cout << "The maximum product subarray: " << maxProductSubArrayy(nums);
    cout << "The maximum product subarray: " << maxProductSubArrayyy(nums);
    cout << "The maximum product subarray: " << maxProductSubArrayyyy(nums);
    return 0;
}
