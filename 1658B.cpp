#include <bits/stdc++.h>
using namespace std;

long long int mod(long long int x)
{
    return (x % 998244353 + 998244353) % 998244353;
}

long long factorial(long long int x)
{
    if (x == 1)
        return 1;
    return mod(mod(x) * mod(factorial(x - 1)));
}

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int n;
        cin >> n;
        if (n & 1 == 1)
            cout << 0 << endl;
        else
        {
            long long int ans = mod(mod(factorial(n / 2)) * mod(factorial(n / 2)));
            cout << ans << endl;
        }
    }
    return 0;
}