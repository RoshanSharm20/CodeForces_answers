#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int n, x, y;
        cin >> n >> x >> y;

        for (int diff = 1; diff <= (y - x); ++diff)
        {
            vector<int> ans;
            int num = y;
            bool xVisited = false;
            while (num > 0 && ans.size() < n)
            {
                if (num == x)
                    xVisited = true;
                ans.push_back(num);
                num -= diff;
            }

            if (!xVisited)
                continue;
            num = y + diff;
            while (ans.size() < n)
            {
                ans.push_back(num);
                num += diff;
            }

            for (auto it : ans)
                cout << it << " ";
            cout << endl;
            break;
        }
    }

    return 0;
}