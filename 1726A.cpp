#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> v;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < t; ++i)
    {
        int max_val = 0;
        int maxi = *max_element(v[i].begin(), v[i].end());
        // int mini = *min_element(v[i].begin(), v[i].end());
        max_val = max((maxi - v[i][0]), (maxi - v[i][v[i].size() - 1]));
        cout << max_val << endl;
    }
}