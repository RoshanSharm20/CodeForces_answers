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
        int count = 0;
        int j = 10;
        vector<int> ans;
        int rem;
        while (v[i] != 0)
        {
            rem = v[i] % j;
            if (rem != 0)
            {
                count++;
                ans.push_back(rem);
            }
            v[i] = v[i] - rem;
            j *= 10;
        }
        cout << count << endl;
        for (int k = 0; k < ans.size(); ++k)
        {
            cout << ans[k] << " ";
        }
        cout << "\n";
    }
}