#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size(); 
    int preSum = 0, cnt = 0;
    unordered_map<int,int> mpp;
    for (int i = 0; i < n; i++) {
        preSum += nums[i];
        if(preSum == k){
            cnt++;
        }

        if(mpp.find(preSum - k) != mpp.end())
           cnt += mpp[preSum-k];
           mpp[preSum]++;
    }
    return cnt;
    }

    int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    int k = 3;
    cout << "The total number of subarrays whose sum equals to k are "<< subarraySum(nums, k);
    return 0;
}