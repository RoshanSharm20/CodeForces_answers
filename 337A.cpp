#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int result = INT_MAX;
    for (int i = 0; i < m - (n - 1); ++i)
    {
        int mini = v[i + (n - 1)] - v[i];
        result = min(result, mini);
    }
    cout << result << endl;
}