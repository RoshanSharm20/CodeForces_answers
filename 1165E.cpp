#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long mod = 998244353;
    vector<long long> first(n), second(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> first[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> second[i];
    }
    sort(second.begin(), second.end());

    vector<long long> values;
    for (int i = 0; i < n; ++i)
    {
        long long val = first[i] * (i + 1) * (n - i);
        values.push_back(val);
    }

    sort(values.rbegin(), values.rend());

    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum = (sum + ((values[i] % mod) * (second[i] % mod)) % mod) % mod;
    }
    cout << sum << endl;
    return 0;
}