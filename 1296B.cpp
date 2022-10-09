#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    for (int i = 0; i < t; ++i)
    {
        int x;
        cin >> x;
        int x1 = x;
        int count = 0;
        while (x != 0)
        {
            if (x < 10)
            {
                count++;
                x = x / 10;
            }
            else
            {
                int fact = x - (x % 10);
                count += fact / 10;
                x = x - fact + (fact / 10);
            }
        }
        ans.push_back(x1 + count - 1);
    }
    for (int i = 0; i < t; ++i)
    {
        cout << ans[i] << endl;
    }
}