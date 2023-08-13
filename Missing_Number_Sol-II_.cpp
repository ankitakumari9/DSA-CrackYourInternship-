#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;

    for (int i = 0; i < n; i++)
    {
        sum -= nums[i];
    }
    return sum;
}

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "The missing number is " << missingNumber(nums);
    return 0;
}