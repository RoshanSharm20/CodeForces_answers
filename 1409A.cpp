#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    for (int i = 0; i < t; ++i)
    {
        int a, b;
        cin >> a >> b;
        int x = max(a, b);
        int y = min(a, b);
        int count = 0;
        while (x != y)
        {
            if ((x - y) >= 10)
            {
                int rem = ((x - y) / 10);
                x = x - (rem * 10);
                count += rem;
            }
            else
            {
                x -= (x - y);
                count++;
            }
        }
        ans.push_back(count);
    }
    for (int i = 0; i < t; ++i)
    {
        cout << ans[i] << endl;
    }
}