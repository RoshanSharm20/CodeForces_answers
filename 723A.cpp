#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    int mini = *min_element(v.begin(), v.end());
    int maxi = *max_element(v.begin(), v.end());
    int min_val = INT_MAX;
    for (int i = mini; i <= maxi; ++i)
    {
        int val = abs(a - i) + abs(b - i) + abs(c - i);
        min_val = min(val, min_val);
    }
    cout << min_val << endl;
}