#include <bits/stdc++.h>
using namespace std;

bool isNumber(string s)
{
    bool num = false;
    bool exp = false;
    bool dot = false;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c >= '0' && c <= '9')
        {
            num = true;
        }
        else if (c == 'e' || c == 'E')
        {
            if (exp || !num)
                return false;
            exp = true;
            num = false;
        }
        else if (c == '.')
        {
            if (dot || exp)
                return false;
            dot = true;
        }
        else if (c == '-' || c == '+')
        {
            if (i != 0 && s[i - 1] != 'e' && s[i - 1] != 'E')
                return false;
        }
        else
        {
            return false;
        }
    }

    return num;
}

int main()
{
    string s = "99e2.5";
    cout << "Is the number valid ? " << isNumber(s);

    return 0;
}