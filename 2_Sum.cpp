#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <unordered_map>
using namespace std;

/*vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i <nums.size() ; i++)
    {
        int complement = target - nums[i];
        if (m.find(complement) != m.end())
        {
            return {m[complement], i};
        }
        else
        {
            m[nums[i]] = i;
        }
    }
    return {-1, -1};
}*/
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int target = 9;
    vector<int>myVec = twoSum(nums, target);
   for(int i = 0; i<myVec.size(); i++){
        cout<<myVec[i]<<"";
    }
    return 0;
}