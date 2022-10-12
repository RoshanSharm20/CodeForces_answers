#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
            cout << (v[1] - v[0]) << " ";
        else if (i == n - 1)
            cout << (v[n - 1] - v[n - 2]) << " ";
        else
            cout << min(v[i] - v[i - 1], v[i + 1] - v[i]) << " ";

        if ((i == 0) || (i == n - 1))
            cout << v[n - 1] - v[0] << endl;
        else
            cout << max(v[i] - v[0], v[n - 1] - v[i]) << endl;
    }
}