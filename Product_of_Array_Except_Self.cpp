#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> left(n);
    vector<int> right(n);

    left[0] = 1;

    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[n - 1] = 1;

    for (int i = n - 2; i >= -1; i--)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[i] = left[i] * right[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 1, 3, 4};
    vector<int> myVec = productExceptSelf(nums);

    cout << "The product array is" << endl;
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
}
