#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string collect = "";
    for (int i = 0; i < n; ++i)
    {
        if (collect == "")
        {
            collect += s[i];
        }
        else
        {
            if (s[i] == collect.back())
                collect += s[i];
            else
                collect.erase(collect.size() - 1, 1);
        }
    }
    cout << collect.size();
}