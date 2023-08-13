#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long int x)
{

    if (x < 0)
    {
        return false;
    }

    long long int div = 1;

    while (x >= 10 * div)
    {
        div *= 10;
    }

    while (x != 0)
    {
        long long int right = x % 10;
        long long int left = x / div;

        if (left != right)
        {
            return false;
        }

        x = (x % div) / 10;
        div = div / 100;
    }
    return true;
}
int main()
{
    // long long int x = 1221;
    long long int x = 1000000001;

    cout << "Is the number palindrome ? " << isPalindrome(x);
    return 0;
}