#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
    set<int> myset;
    int val;
    int index;
    while (true)
    {
        val = 0;
        while (n != 0)
        {
            index = n % 10;
            val += index * index;
            n /= 10;
        }
        if (val == 1)
        {
            return true;
        }
        else if (myset.find(val) != myset.end())
        {
            return false;
        }
        else
        {
            myset.insert(val);
            n = val;
        }
    }
    return false;
}
int main()
{
    // int n = 2;
    int n = 19;
    cout << "Is the number happy ? " << isHappy(n);
    return 0;
}