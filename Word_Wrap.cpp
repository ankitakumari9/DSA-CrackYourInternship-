#include <bits/stdc++.h>
using namespace std;

int dp[505][2005];
int solveMem(int i, int rem, vector<int> &nums, int &k)
{
    if (i == nums.size())
    {
        return 0;
    }
    if (dp[i][rem] != -1)
    {
        return dp[i][rem];
    }
    int ans;
    if (nums[i] > rem)
    {
        ans = (rem + 1) * (rem + 1) + solveMem(i + 1, k - nums[i] - 1, nums, k);
    }
    else
    {
        int choice1 = (rem + 1) * (rem + 1) + solveMem(i + 1, k - nums[i] - 1, nums, k);
        int choice2 = solveMem(i + 1, rem - nums[i] - 1, nums, k);
        ans = min(choice1, choice2);
    }
    dp[i][rem] = ans;
    return dp[i][rem];
}

int solveWordWrap(vector<int> nums, int k)
{
    memset(dp, -1, sizeof(dp));
    return solveMem(0, k, nums, k);
}

int main()
{
    vector<int> nums{3, 2, 2, 5};
    int k = 6;
    cout << "The minimum cost is " << solveWordWrap(nums, k);
    return 0;
}