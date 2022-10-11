#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        vector<int> v1;
        for (auto it : v)
            if (it % 2 == 0)
                v1.push_back(it);
        for (auto it : v)
            if (it & 1)
                v1.push_back(it);

        int c = 0;
        for (int i = 0; i < v1.size(); ++i)
        {
            for (int j = i + 1; j < v1.size(); ++j)
            {
                if (__gcd(v1[i], 2 * v1[j]) > 1)
                    c++;
            }
        }
        cout << c << endl;
    }
}
