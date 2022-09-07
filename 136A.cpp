#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        cout << v[i].second << " ";
    }
    return 0;
}