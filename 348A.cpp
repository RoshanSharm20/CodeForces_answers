#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    long long maxi = INT_MIN;
    for (long long i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        sum += x;
        maxi = max(maxi, x);
    }

    long long ans = (sum / (n - 1));
    if (ans * (n - 1) < sum)
        ans++;
    if (ans < maxi)
        ans = maxi;
    cout << ans << endl;
}