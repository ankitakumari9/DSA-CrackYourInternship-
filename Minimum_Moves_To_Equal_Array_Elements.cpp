#include <bits/stdc++.h>
using namespace std;

int minMoves(vector<int> &nums)
{
    int n = nums.size();
    int mini = INT_MAX;
    int sum = 0;
    for (auto &it : nums)
    {
        mini = min(mini, it);
        sum += it;
    }
    return (sum - n * mini);
}

int main()
{
    vector<int> nums{1, 2, 3};

    cout << "the minimum number of moves required to make all array elements equal are " << minMoves(nums);

    return 0;
}