#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int minimumNumberOfSwaps(vector<int> arr, int n)
{ // arr = {1,5,4,3,2}
    int ans = 0;
    unordered_map<int, int> m;
    vector<int> temp = arr;         // temp = arr = {1,5,4,3,2}
    sort(temp.begin(), temp.end()); // sort temp : temp = {1,2,3,4,5}

    for (int i = 0; i < n; i++)
    {                  // traverse the array arr
        m[arr[i]] = i; /* create map :  key      value
                                         1         0
                                         5         1
                                         4         2
                                         3         3
                                         2         4  */
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != temp[i])
        {                             /*arr[0] == temp[0] i.e., 1 == 1
                                        arr[1] != temp[1] i.e., 5 != 2*/
            ans++;                    // ans = 1
            int init = arr[i];        // init = arr[1] = 5
            swap(arr, i, m[temp[i]]); // swap elements at index 1 and m[temp[1]] = m[2] = 4

            m[init] = m[temp[i]]; // update map : m[init] = m[temp[1]] i.e., m[5] = m[2] i.e, m[5] = 4
            m[temp[i]] = i;       //    m[temp[1]] = 1 i.e., m[2] = 1
                                  // In this way loop runs again...
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 5, 4, 3, 2};
    int n = 5;
    cout << "The minimum no. of swaps required to sort the array are " << minimumNumberOfSwaps(arr, n) << endl;
    return 0;
}