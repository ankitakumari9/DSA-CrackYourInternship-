#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <unordered_map>
using namespace std;

int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxArea = 0;
        while(left < right){
            int area = min(height[left] , height[right])* (right - left);
            maxArea = max(area , maxArea);
            if(height[left] < height[right] ){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }

    
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(8);
    nums.push_back(6);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(8);
    nums.push_back(3);
    nums.push_back(7);

    cout<<"The maximum area of water a container can store is "<<maxArea(nums);
    return 0;
}