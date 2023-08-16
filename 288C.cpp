#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mask = (1 << 20) - 1;
    vector<int> sequence(n + 1, 0);
    vector<bool> available(n + 1, false);
    for (int i = n; i >= 0; --i)
    {
        while ((mask ^ i) > n || available[mask ^ i] == true)
            mask = mask >> 1;
        sequence[i] = mask ^ i;
        available[mask ^ i] = true;
    }

    // long long sum = (n * (n + 1));
    cout << (long long)n * (n + 1) << endl;
    for (int i = 0; i <= n; ++i)
    {
        cout << sequence[i] << " ";
    }
    return 0;
}