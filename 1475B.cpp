#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < t; ++i)
    {
        if (((v[i] % 2020) == 0) || ((v[i] % 2021) == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            int rem = v[i] % 2020;
            v[i] = v[i] - (2021 * rem);
            if (v[i] >= 0 && v[i] % 2020 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}