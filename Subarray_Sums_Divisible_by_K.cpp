#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraysDivByK(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    int sum = 0;
    mp[0] = 1;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        int rem = sum % k;
        if (rem < 0)
        {
            rem += k;
        }
        if (mp.find(rem) != mp.end())
        {
            result += mp[rem];
        }
        mp[rem]++;
    }
    return result;
}
int main()
{
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(0);
    nums.push_back(-2);
    nums.push_back(-3);
    nums.push_back(1);
    int k = 5;
    cout << "Number of non-empty subarrays that have a sum divisible by k are "<< subarraysDivByK(nums, k);
    return 0;
}
