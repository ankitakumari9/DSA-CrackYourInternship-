#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

vector<int>findDuplicates(vector<int>&nums){
       int n = nums.size();
       vector<int>ans;
       for(int i = 0;i < n; i++){
           int index = abs(nums[i]) - 1;
           if(nums[index] < 0){
               ans.push_back(index + 1);
           }
           nums[index] = nums[index] * -1;
       }
       return ans;
   }

   int main()
{
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
   vector<int>myVec = findDuplicates(nums);
   for(int i = 0; i<myVec.size(); i++){
        cout<<myVec[i]<<"";
    }
    return 0;
}