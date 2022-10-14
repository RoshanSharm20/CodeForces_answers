#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    int i;
    for (i = 0; i < n; ++i)
    {
        if (5 - v[i] >= k)
            break;
    }
    cout << (n - i) / 3;
}