#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int n, m, k;
        cin >> n >> m >> k;

        if (n % 2 == 0 && m % 2 == 0)
        {
            if (k % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (n % 2 == 0 && m % 2 == 1)
        {
            int max_val_k = (((n * m) / 2) - (n / 2));
            if (max_val_k >= k && k % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            int min_val_k = (m / 2);
            if (k >= min_val_k && (k - min_val_k) % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}