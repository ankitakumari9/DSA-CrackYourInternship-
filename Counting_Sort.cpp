#include <bits/stdc++.h>
using namespace std;

vector<int> counting_sort(vector<int> &a, int n, int k)
{
    vector<int> count(k, 0);
    vector<int> b(n, -1);

    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[a[i]]] = a[i];
    }
    return b;
}
int main()
{
    vector<int> a = {2, 1, 1, 0, 2, 5, 4, 0, 2, 8, 7, 7, 9, 2, 0, 1, 9};
    int n = 17;
    int k = 9;
    vector<int> myVec = counting_sort(a, n, k);
    cout << "The sorted vector is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << myVec[i] << " ";
    }
    return 0;
}