#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long max_val, min_val;
    max_val = (long long)(n - m) * (n - m + 1) / 2;
    long long x = (n / m), b = (n % m);
    min_val = (long long)((x * (x + 1) * b) / 2 + ((x - 1) * x * (m - b)) / 2);
    cout << min_val << " " << max_val << endl;
    return 0;
}