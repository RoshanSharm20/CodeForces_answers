#include <bits/stdc++.h>
using namespace std;

long long int mod(long long int x)
{
    return (x % 998244353 + 998244353) % 998244353;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    long long max_count = 0, count = 1;
    int start = -1;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > (n - k))
        {
            max_count += nums[i];
            if (start != -1)
            {
                count = mod(mod(count) * mod(i - start));
                start = i;
            }
            else
                start = i;
        }
    }

    cout << max_count << " " << count << endl;
    return 0;
}