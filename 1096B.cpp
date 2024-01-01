#include <bits/stdc++.h>
using namespace std;

long long int mod(long long int x)
{
    return (x % 998244353 + 998244353) % 998244353;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long int left = 1, right = 1;
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
            left++;
        else
            break;
    }

    for (int i = n - 2; i >= 0; --i)
    {
        if (s[i] == s[i + 1])
            right++;
        else
            break;
    }

    long long int ans = 0;
    if (s[0] == s[n - 1])
    {
        ans = mod(mod(left) * mod(right));
    }
    ans = mod(mod(ans) + mod(left));
    ans = mod(mod(ans) + mod(right));
    ans = mod(mod(ans) + (long long int)1);

    cout << ans << endl;
    return 0;
}