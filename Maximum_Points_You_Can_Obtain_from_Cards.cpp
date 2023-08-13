#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& cardPoints, int k) {
        int  n = cardPoints.size();
        int overallSum = 0;
        for(int i = 0; i<n; i++){
         overallSum += cardPoints[i]; 
        }
        int window = n-k;
        int sum = 0;

        for(int i = 0; i < window ; i++){
            sum += cardPoints[i];
        }
        int minSum = sum;
        for(int i = window; i < n ; i++){
            sum += cardPoints[i] - cardPoints[i-window];
            minSum = min(sum , minSum);
        }
        return overallSum - minSum;
    }
   int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(1);
    int k = 3;
    
    cout<<"The maximum score you can obtain from cards is "<<maxScore(nums, k);
    
    return 0;
}
