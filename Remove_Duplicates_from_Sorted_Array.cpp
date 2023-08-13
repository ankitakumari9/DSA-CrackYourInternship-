#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <set>
using namespace std;

/*int removeDuplicates(vector<int> &nums)
{
    set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    int index = 0;
    for (auto it : st)
    {
        nums[index] = it;
        index++;
    }
    return index;
}*/
int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j=1; j<nums.size(); j++){
           if(nums[i]!= nums[j]){
               nums[i+1] = nums[j];
               i++;
           }       
        }
    return i+1;
    } 
int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    cout << "The number of unique elements is" << removeDuplicates(nums) << endl;
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<"";
    }
    return 0;
}
