#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 1;
    int result = 0;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            result = max(result, count);
        }
        else
            count = 1;
    }
    if (result >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}