#include <bits/stdc++.h>
using namespace std;

int get_length(vector<int> a, vector<int> b)
{
    return (a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]);
}
bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
{
    int m = get_length(p1, p2);
    int n = get_length(p1, p3);
    int o = get_length(p1, p4);
    int p = get_length(p2, p3);
    int q = get_length(p2, p4);
    int r = get_length(p3, p4);

    if (m == 0 || n == 0 || o == 0 || p == 0 || q == 0 || r == 0)
    {
        return false;
    }

    vector<int> sides;
    sides.push_back(m);
    sides.push_back(n);
    sides.push_back(o);
    sides.push_back(p);
    sides.push_back(q);
    sides.push_back(r);

    unordered_map<int, int> umap;
    for (auto &s : sides)
    {
        if (!umap.count(s))
            umap.insert({s, 1});
        else
            umap[s]++;
    }
    if (umap.size() != 2)
        return false;
    for (auto &p : umap)
        return (p.second == 4) || (p.second == 2);
    return false;
}
int main()
{
    vector<int> p1 = {0, 0};
    vector<int> p2 = {1, 1};
    vector<int> p3 = {1, 0};
    vector<int> p4 = {0, 1};
    cout << "Do the points construct a square ? " << validSquare(p1, p2, p3, p4);
    return 0;
}