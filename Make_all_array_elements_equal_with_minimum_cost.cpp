#include <bits/stdc++.h>
using namespace std;

long long findCost(vector<int> &nums, int target)
{
    long long result = 0;

    for (int i = 0; i < nums.size(); i++)
    {                                               // for mid
        result += (long long)abs(nums[i] - target); // (1 - 100) + (100 - 100) + (101 - 100) = abs(-98) = 98
    }
    // for mid + 1
    // (1 - 101) + (100 - 101) + (101 - 101) = abs(-101) = 101
    return result;
}

long long minCost(vector<int> &nums) //{1, 100 ,101}
{
    long long answer = INT_MAX;

    int left = *min_element(begin(nums), end(nums));  // left = 0
    int right = *max_element(begin(nums), end(nums)); // right = 2

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // mid = 1

        long long cost1 = findCost(nums, mid);     // cost1 = 98
        long long cost2 = findCost(nums, mid + 1); // cost2 = 101

        answer = min(cost1, cost2); // min = 98

        if (cost2 > cost1) // 101 > 98
        {
            right = mid - 1; // right = 0
            //  this way , again loop runs and finally return minimum cost i.e., 100
        }
        else
        {
            left = mid + 1;
        }
    }

    return answer == INT_MAX ? 0 : answer;
}

int main()
{
    // vector<int> nums = {1, 100, 101};
    vector<int> nums = {4, 6};

    cout << "The minimum cost is " << minCost(nums);

    return 0;
}