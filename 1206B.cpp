#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    long long int ans = 0;
    int neg = 0;
    int zero = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            ans += abs(v[i] + 1);
            neg++;
        }
        else if (v[i] > 0)
        {
            ans += (v[i] - 1);
        }
        else
        {
            zero++;
        }
    }
    if (neg % 2)
    {
        if (zero)
        {
            ans += zero;
        }
        else
        {
            ans += 2;
        }
    }
    else
    {
        ans += (zero);
    }
    cout << ans << endl;
}