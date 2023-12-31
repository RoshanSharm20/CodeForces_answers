#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    long long int ans = 1;
    int start = -1;
    bool contains = false;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 1)
        {
            contains = true;
            if (start != -1)
            {
                ans = ans * (i - start);
                start = i;
            }
            else
                start = i;
        }
    }
    if (contains)
        cout << ans << endl;
    else
        cout << 0 << endl;

    return 0;
}