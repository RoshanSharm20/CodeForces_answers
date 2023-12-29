#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int n;
        cin >> n;
        int nums[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        int rem = 10 - n;
        cout << (rem * (rem - 1) * 6) / 2 << endl;
    }
    return 0;
}