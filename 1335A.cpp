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
        if (v[i] % 2 != 0)
            cout << v[i] / 2 << endl;
        else
            cout << (v[i] / 2) - 1 << endl;
    }
}