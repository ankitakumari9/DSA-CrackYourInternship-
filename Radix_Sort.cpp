#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int> a, int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

void counting_sort(vector<int> a, int n, int pos)
{
    vector<int> count(10, 0);
    vector<int> b(n, -1);

    for (int i = 0; i < n; i++)
    {
       count[(a[i] / pos) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[(a[i] / pos) % 10]] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

void radix_sort(vector<int> a, int n)
{
    int max = getMax(a, n);

    for (int pos = 1; max / pos > 0; pos *= 10)
    {
        counting_sort(a, n, pos);
    }

}

int main()
{
    vector<int> a = {432, 8, 530, 90, 88, 231, 11, 45, 677, 199};
    int n = 10;
    radix_sort(a, n);
    cout << "The sorted vector is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}