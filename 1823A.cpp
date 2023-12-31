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

        int start = n, end = 0;
        bool possible = false;
        while (start >= end)
        {
            int sum = (start * (start - 1)) / 2;
            if (end > 0)
                sum += (end * (end - 1)) / 2;

            if (sum == k)
            {
                possible = true;
                break;
            }
            start--;
            end++;
        }

        if (possible)
        {
            cout << "YES" << endl;
            while (start > 0)
            {
                cout << 1 << ' ';
                start--;
            }
            while (end > 0)
            {
                cout << -1 << ' ';
                end--;
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}