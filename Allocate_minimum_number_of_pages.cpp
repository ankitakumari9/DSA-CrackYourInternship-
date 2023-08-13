#include <bits/stdc++.h>
using namespace std;

bool isPossible(int A[], int N, int M, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < N; i++)
    {
        if (pageSum + A[i] <= mid)
        {
            pageSum += A[i];
        }
        else
        {
            studentCount++;
            if (studentCount > M || A[i] > mid)
            {
                return false;
            }
            pageSum = A[i];
        }
        if (studentCount > M)
        {
            return false;
        }
    }
    return true;
}

int findPages(int A[], int N, int M)
{
    if (M > N)
        return -1;

    int s = 0;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(A, N, M, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int A[] = {12, 34, 67, 90};
    int N = 4;
    int M = 2;
    cout << "The maximum number of pages alloted to a student which is minimum are " << findPages(A, N, M);
    return 0;
}