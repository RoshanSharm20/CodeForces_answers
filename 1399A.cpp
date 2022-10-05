#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int count = v.size();
        for (int j = 1; j < v.size(); ++j)
        {
            if ((v[j] - v[j - 1]) <= 1)
            {
                count--;
            }
        }
        if (count == 1)
            ans.push_back("YES");
        else
            ans.push_back("NO");
    }
    for (int i = 0; i < t; ++i)
    {
        cout << ans[i] << endl;
    }
}