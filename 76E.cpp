#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> xPoints(n);
    vector<long long> yPoints(n);
    for (long long i = 0; i < n; ++i)
    {
        cin >> xPoints[i] >> yPoints[i];
    }

    vector<long long> xSuffix(n);
    vector<long long> ySuffix(n);

    for (long long i = n - 1; i >= 0; --i)
    {
        xSuffix[i] = ((i == n - 1) ? 0 : xSuffix[i + 1] + xPoints[i + 1]);
        ySuffix[i] = ((i == n - 1) ? 0 : ySuffix[i + 1] + yPoints[i + 1]);
    }

    long long ans = 0;
    for (long long i = 0; i < n; ++i)
    {
        ans += (xPoints[i] * xPoints[i] * (n - 1));
        ans += (yPoints[i] * yPoints[i] * (n - 1));
    }

    for (long long i = 0; i < n - 1; ++i)
    {
        ans += (-2 * ((xPoints[i] * xSuffix[i]) + (yPoints[i] * ySuffix[i])));
    }

    cout << ans << endl;
    return 0;
}