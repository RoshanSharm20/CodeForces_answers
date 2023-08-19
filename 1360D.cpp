#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        int ans = n;
        for (int a = 1; a * a <= n; ++a)
        {
            if (n % a == 0)
            {
                int b = n / a;
                if (a <= k)
                    ans = min(ans, b); // since a is range that means b can possibly be an answer
                if (b <= k)
                    ans = min(ans, a); // if b is in range then a can also be the answer
            }
        }
        cout << ans << endl;
    }
    return 0;
}