#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &nums, int n, int k, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + nums[i] <= mid)
        {
            pageSum += nums[i];
        }
        else
        {
            studentCount++;
            if (studentCount > k || nums[i] > mid)
            {
                return false;
            }
            pageSum = nums[i];
        }
        if (studentCount > k)
        {
            return false;
        }
    }
    return true;
}

int splitArray(vector<int> &nums, int k) // nums = {7, 2, 5, 10, 8} , k = 2
{
    int n = nums.size(); // n = 5
    if (k > n)
        return -1;

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i]; // sum = 32
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2; // mid = 16

    while (s <= e)
    {
        if (isPossible(nums, n, k, mid)) // returns false for mid = 16; true for mid = 24 ; true for mid = 20 ;
                                         //          true for mid = 18; false for mid = 17
        {
            ans = mid;   // ans = 24 ; ans = 20 ; ans = 18
            e = mid - 1; // e = 24 - 1 = 23 ; e = 20 - 1 = 19 ; e = 18 - 1 = 17
        }
        else
        {
            s = mid + 1;       // s = 16 + 1 = 17; s = 17 + 1 = 18
        }                                       //(Gets out of loop as s becomes greater than e)
        mid = s + (e - s) / 2; // mid = 24 ; mid = 20 ; mid = 18 ; mid = 17
    }
    return ans; // ans = 18
}

int main()
{
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;
    cout << "The minimum largest sum is " << splitArray(nums, k);
    return 0;
}