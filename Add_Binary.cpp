#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    int alen = a.length();
    int blen = b.length();
    int i = 0, carry = 0;
    string ans = "";

    while (i < alen || i < blen || carry != 0)
    {
        int x = 0;
        if (i < alen && a[alen - i - 1] == '1')
        {
            x = 1;
        }

        int y = 0;
        if (i < blen and b[blen - i - 1] == '1')
        {
            y = 1;
        }

        ans = to_string((x + y + carry) % 2) + ans;
        carry = (x + y + carry) / 2;
        i += 1;
    }
    return ans;
}

int main()
{
    string a = "11";
    string b = "1";

    string ans = addBinary(a, b);

    cout << "The sum is" << endl;

    for (auto &ch : ans)
    {
        cout << ch << "";
    }

    return 0;
}