#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    for (int i = 0; i < t; ++i)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        // int min_weight = a - b;
        // int max_weight = a + b;
        if (((a + b) * n) < (c - d))
            ans.push_back("No");
        else if (((a - b) * n) > (c + d))
            ans.push_back("No");
        else
            ans.push_back("Yes");
    }
    for (int i = 0; i < t; ++i)
        cout << ans[i] << endl;
}