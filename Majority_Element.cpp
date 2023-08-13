#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int majority = nums[0], votes = 1;

    for (int i = 1; i < nums.size(); i++) {

      if (votes == 0) {
        votes++;
        majority = nums[i];
      } 
      else if (majority == nums[i]) {
        votes++;
      } 
      else{
        votes--;
      }
    }
    return majority;
  }

   int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);

    cout << "The majority element is "<<majorityElement(nums);
    return 0;
}