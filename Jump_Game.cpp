#include <bits/stdc++.h>
using namespace std;

 bool canJump(vector<int>& nums) {
      int n = nums.size();
      int reachable = 0;
      for(int i = 0; i<n; i++){
          if(reachable < i){
              return false;
          }
          reachable = max(reachable , i + nums[i]);
      }
      return true;
    }
    int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(4);
    
    cout<<"Can you reach the last index ? "<<canJump(nums);
    return 0;
}