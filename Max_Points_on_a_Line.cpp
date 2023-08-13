#include <bits/stdc++.h>
using namespace std;

int maxPoints(vector<vector<int>> &points)
{ /* let points  {{1,1},
                 {2,2},
                 {3,3}};*/

    int n = points.size(); // no. of rows = 3

    if (n == 1)
        return 1; // if no. of rows = 1: return true

    int result = 0; // Intialize result

    for (int i = 0; i < n; i++) // 1st row (1st point) {x1,y1}
    {
        unordered_map<double, int> umap; // map to store theta(key) with values

        for (int j = 0; j < n; j++) // 2nd row(2nd point) {x2,y2}
        {
            if (j == i)
                continue;                          // if both the points are same : skip
            auto dy = points[j][1] - points[i][1]; // dy = (y2-y1)
            auto dx = points[j][0] - points[i][0]; // dx = (x2-x1)

            auto theta = atan2(dy, dx); // slope = theta = tan^-1(dy/dx)

            umap[theta]++; // Increase count/value
        }

        for (auto &it : umap)
        {
            result = max(result, it.second + 1);
            // return maximum of result & value in map
        }
    }
    return result;
}
int main()
{
    vector<vector<int>> points{{1, 1},
                               {3, 2},
                               {5, 3},
                               {4, 1},
                               {2, 3},
                               {1, 4}};
    cout << "The maximum number of points that lie on the same straight line are " << maxPoints(points);
    return 0;
}