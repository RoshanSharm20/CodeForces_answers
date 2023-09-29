#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int n, k;
        cin >> n >> k;

        if (k > n || (n % 2 == 1 && k % 2 == 0))
        {
            cout << "NO" << endl;
            continue;
        }
        else if (k == 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            continue;
        }
        else
        {
            int x = -1, y = -1;
            for (int i = 1; i < n; ++i)
            {
                if ((n - i) % (k - 1) == 0 && ((n - i) / (k - 1)) % 2 == i % 2)
                {
                    x = i;
                    y = (n - i) / (k - 1);
                    break;
                }
            }

            if (x == -1)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                cout << x << " ";
                for (int i = 1; i < k; ++i)
                {
                    cout << y << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}