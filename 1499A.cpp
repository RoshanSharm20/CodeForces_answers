#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >> b;

        int whites = min(k1, k2) + abs(k1 - k2) / 2;
        int blacks = min(n - k1, n - k2) + abs(k1 - k2) / 2;

        if (w <= whites && b <= blacks)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}