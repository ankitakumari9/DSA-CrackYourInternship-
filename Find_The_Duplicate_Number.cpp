#include <iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

    int findDuplicate(vector<int>& nums) {
        int ind = 0;
		
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                ind = nums[i];
                break;
            }
        }
        return ind;
    }
 int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(2);
    cout<<"The duplicate number is "<<findDuplicate(nums)<<endl;
    return 0;
 }
