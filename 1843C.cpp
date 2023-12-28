#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        long long int n, sum = 0;
        cin >> n;
        while (n > 0)
        {
            sum += n;
            n = n >> 1;
        }
        cout << sum << endl;
    }
    return 0;
}