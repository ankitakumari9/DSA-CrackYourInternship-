#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{ // x = 123
    int ans = 0;
    while (x != 0) // loop runs until x becomes zero
    {
        int digit = x % 10; // digit = 123%10 = 3 ; 2 ; 1
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit; // ans =  (0 * 10) + 3 = 3 ; 32 ; 321
        x = x / 10;               // x = 123/10 = 12 ; 1 ; 0
    }
    return ans; // ans = 321
}
int main()
{
    int x = 123;
    cout << "The reversed integer is " << reverse(x);
    return 0;
}