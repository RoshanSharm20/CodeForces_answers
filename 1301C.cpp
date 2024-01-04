#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        long long int n, m;
        cin >> n >> m;

        long long int groups = m + 1;
        long long int zero = (n - m) / groups;
        long long int left = (n - m) % groups;

        long long int g1_size = zero + 1;
        long long int g1_number = left;
        long long int g2_size = zero;
        long long int g2_number = groups - g1_number;

        long long int ans = (n * (n + 1)) / 2 - (((g1_size * (g1_size + 1)) / 2) * g1_number + ((g2_size * (g2_size + 1)) / 2) * g2_number);

        cout << ans << endl;
    }

    return 0;
}