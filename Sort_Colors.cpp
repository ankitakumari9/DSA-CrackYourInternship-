#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    int start = 0;
    int mid = 0;
    int end = nums.size() - 1;
    while (mid <= end)
    {
        switch (nums[mid])
        {
        case 0:
            swap(nums[start], nums[mid]);
            mid++;
            start++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(nums[mid], nums[end]);
            end--;
            break;
        }
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);
    
    sortColors(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<"";
    }
    return 0;
}