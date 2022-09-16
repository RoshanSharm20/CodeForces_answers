#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1 = "", s2 = "WUB";
    cin >> s;
    int i = 0, c = 0;
    while (i < s.size())
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 3;
            if (s1 != "" && c == 0)
                s1 += " ";
            c = 1;
        }
        else
        {
            s1 += s[i];
            i++;
            c = 0;
        }
    }
    cout << s1 << endl;
}