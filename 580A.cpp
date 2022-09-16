#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    int result = 1;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] <= v[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        result = max(result, count);
    }
    cout << result << endl;
}