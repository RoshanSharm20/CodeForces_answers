#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 4; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[3] - v[0] << " ";
    cout << v[3] - v[1] << " ";
    cout << v[3] - v[2] << endl;
}