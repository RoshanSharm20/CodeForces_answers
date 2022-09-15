#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, n, count = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    int sum1 = 0;
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n; ++i)
    {
        if (sum1 > sum)
            break;
        else
        {
            sum1 += v[i];
            sum -= v[i];
            count++;
        }
    }
    cout << count << endl;
}