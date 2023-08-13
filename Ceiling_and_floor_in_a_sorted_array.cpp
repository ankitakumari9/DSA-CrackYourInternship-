#include <bits/stdc++.h>
using namespace std;

int ceil(vector<int> &arr, int key)
{
    int n = arr.size();
    int l = 0, h = n - 1, mid = 0;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return arr[mid];
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (l < n)
    {
        return arr[l];
    }
    else
    {
        return -1;
    }
}

int floor(vector<int> &arr, int key)
{
    int n = arr.size();
    int l = 0, h = n - 1, mid = 0;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return arr[mid];
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (h < n)
    {
        return arr[h];
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int key = 5;
    cout << "The ceil of the key is " << ceil(arr, key) << endl;
    cout << "The floor of the key is " << floor(arr, key);

    return 0;
}