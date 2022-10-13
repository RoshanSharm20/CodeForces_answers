#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; ++k)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        int x1, y1, x2, y2;
        if (n - i >= i - 1)
        {
            x1 = n;
            x2 = 1;
        }
        else
        {
            x1 = 1;
            x2 = n;
        }

        if (m - j >= j - 1)
        {
            y1 = m;
            y2 = 1;
        }
        else
        {
            y1 = 1;
            y2 = m;
        }
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }
}