#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    for (int i = 0; i < n; ++i)
    {
        if ((v[i].first % v[i].second) == 0)
            cout << 0 << endl;
        else
            cout << (v[i].second - (v[i].first % v[i].second)) << endl;
    }
    return 0;
}