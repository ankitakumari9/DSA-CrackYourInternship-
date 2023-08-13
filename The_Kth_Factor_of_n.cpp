#include <bits/stdc++.h>
using namespace std;

int kthFactor(int n, int k)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if (count == k)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n = 12, k = 3;
    cout << "The kth factor of n is " << kthFactor(n, k);
    return 0;
}