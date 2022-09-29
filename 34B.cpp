#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int sum = 0;
    // int i=0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(-x);
    }
    int maxcount = 0;
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < m; ++i)
    {
        sum += v[i];
        maxcount = max(maxcount, sum);
    }
    cout << maxcount << endl;
}