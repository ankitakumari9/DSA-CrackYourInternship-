#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> umap;
    for (auto x : strs)
    {
        string temp = x;
        sort(x.begin(), x.end());
        umap[x].push_back(temp);
    }
    for (auto x : umap)
    {
        ans.push_back(x.second);
    }
    return ans;
}

int main()
{
    vector<string> strs{
        "eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    cout << "The group of anagrams are" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}