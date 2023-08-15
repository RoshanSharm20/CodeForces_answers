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
        n = n - (k - 3);
        if (n % 2 == 0)
        {
            if (n % 4 == 0)
            {
                cout << (n / 2) << " " << (n / 4) << " " << (n / 4);
            }
            else
            {
                cout << 2 << " " << (n / 2) - 1 << " " << (n / 2) - 1;
            }
        }
        else
        {
            cout << 1 << " " << (n / 2) << " " << (n / 2);
        }
        while (k > 3)
        {
            cout << " " << 1;
            k--;
        }
        cout << endl;
    }
    return 0;
}