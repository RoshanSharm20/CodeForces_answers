#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        if (k > n)
            ans.push_back((k - n));
        else if ((n % 2 != k % 2))
            ans.push_back(1);
        else
            ans.push_back(0);
    }
    for (int i = 0; i < t; ++i)
        cout << ans[i] << endl;
}