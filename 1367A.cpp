#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    for (int i = 0; i < t; ++i)
    {
        string s;
        cin >> s;
        string str = "";
        str += s[0];
        str += s[1];
        for (int j = 3; j < s.size(); j = j + 2)
            str += s[j];
        ans.push_back(str);
    }
    for (int i = 0; i < t; ++i)
        cout << ans[i] << endl;
}