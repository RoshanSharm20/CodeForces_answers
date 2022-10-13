#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
            cout << n + (2 * k) << endl;
        else
        {
            while (k)
            {
                for (int i = 3; i <= n; ++i)
                {
                    if (n % i == 0)
                    {
                        n = n + i;
                        break;
                    }
                }
                k--;
                if (n % 2 == 0)
                    break;
            }
            cout << n + (2 * k) << endl;
        }
        t--;
    }
}