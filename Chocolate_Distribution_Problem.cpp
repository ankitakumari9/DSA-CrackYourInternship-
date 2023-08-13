#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int findMinDiff(int arr[], int n, int m)
{
    if (m == 0 || n == 0)
        return 0;
    sort(arr, arr + n);
 
    if (n < m)
        return -1;
    int s,e;
    s=0;
    e=m-1; 
    int min_diff = INT_MAX;

   while(e<n){
   int diff = arr[e] - arr[s];
   if (diff < min_diff)
            min_diff = diff;
            s++;
            e++;
   }
 return min_diff;
}

    int main(){
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
    return 0;
}
