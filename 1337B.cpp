#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    for (int i = 0; i < t; ++i)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while (n > 0 || m > 0)
        {
            if ((x - (m * 10) <= 0))
            {
                x = x - (m * 10);
                break;
            }
            else
            {
                if (n > 0)
                {
                    x = (x / 2) + 10;
                    n--;
                }
                else
                {
                    x = x - (m * 10);
                    m = 0;
                }
            }
        }
        if (x <= 0)
            ans.push_back("YES");
        else
            ans.push_back("NO");
    }
    for (int i = 0; i < t; ++i)
    {
        cout << ans[i] << endl;
    }
}