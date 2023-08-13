#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n = 16;
    cout << "Is it a power of two ? "<<isPowerOfTwo(n);
    return 0;
}