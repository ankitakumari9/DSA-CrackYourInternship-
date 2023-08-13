#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    string ans;
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n - 1];
    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] != last[i])
        {
            break;
        }
        ans.push_back(first[i]);
    }
    return ans;
}

int main()
{
    vector<string> strs{
        "flower",
        "flow",
        "flight"};

    cout << "The longest common prefix string amongst the array of strings is " << longestCommonPrefix(strs);

    return 0;
}