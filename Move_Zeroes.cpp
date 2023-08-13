#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
}

int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(8);

    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "";
    }
    return 0;
}
