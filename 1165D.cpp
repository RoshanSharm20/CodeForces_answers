#include <bits/stdc++.h>
using namespace std;

bool containsAllDivisors(vector<long long> &div_list, long long &x)
{
    vector<long long> valid_list;
    for (long long i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
        {
            valid_list.push_back(i);
            if (i != (x / i))
                valid_list.push_back(x / i);
        }
    }

    sort(valid_list.begin(), valid_list.end());
    return (valid_list == div_list);
}
int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int n;
        cin >> n;
        vector<long long> div_list(n);
        for (long long i = 0; i < n; ++i)
        {
            cin >> div_list[i];
        }

        sort(div_list.begin(), div_list.end());
        long long x = div_list[0] * div_list[n - 1];

        bool isValid = true;
        for (long long i = 0; i < n; ++i)
        {
            if (x % div_list[i] != 0)
            {
                isValid = false;
                break;
            }
        }

        if (!isValid || !containsAllDivisors(div_list, x))
            cout << -1 << endl;
        else
            cout << x << endl;
    }
    return 0;
}