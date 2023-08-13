#include <bits/stdc++.h>
using namespace std;

int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        
       priority_queue<pair<int,int>> p;
       int ans = INT_MIN;
       for(int i = 0; i < points.size(); i ++){
           while((!p.empty()) && (points[i][0] -p.top().second > k)) p. pop();
           if(!p.empty())
           {
               ans = max( ans , points[i][0] + points[i][1] + p.top().first);
           }
           p.push({points[i][1] - points[i][0], points[i][0]});
       } 
       return ans;
    }

    int main(){
        vector<vector<int>> points{
            {1,3},
            {2,0},
            {5,10},
            {6,-10}
        };
        int k =1;
        
        cout<<"The maximum value of equation is "<<findMaxValueOfEquation( points,  k);

        return 0;
    }