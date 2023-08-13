#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    int i = 0;
    int l = 0;
    int r = 0;
    int n = s.length();
    while (i < n)
    {
        while (i < n && s[i] != ' ')
        {
            s[r] = s[i];
            r++;
            i++;
        }
        if (l < r)
        {
            reverse(s.begin() + l, s.begin() + r);
            s[r] = ' ';
            r++;
            l = r;
        }
        i++;
    }
    s = s.substr(0, r - 1);
    return s;
}

int main()
{
    string s = "the sky is blue";
    cout << "A string of the words in reverse order concatenated by a single space is " << reverseWords(s);
    return 0;
}