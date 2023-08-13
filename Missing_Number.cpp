#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{ // [0 2 3]
    int allNumXOR = 0;

    for (int i = 0; i <= nums.size(); i++) // loop for 0 to n : [0 1 2 3]
    {
        allNumXOR ^= i; // XOR of each element : 0 ^ 1 ^ 2 ^ 3
    }

    for (auto &num : nums) // traverse the vector
    {
        allNumXOR = allNumXOR ^ num; // XOR of each element with prev: 0 ^ 1 ^ 2 ^ 3 ^ 0 ^ 2 ^ 3
                                     //  A ^ 0 = A
                                     //  A ^ A = 0
    }
    return allNumXOR;
}
int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "The missing number is " << missingNumber(nums);
    return 0;
}