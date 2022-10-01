#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> v;
    int count = 0, i = 0, sum = 0;
    for (int i = 0; i < 12; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    if (sum < k)
    {
        cout << "-1" << endl;
    }
    else
    {
        sort(v.begin(), v.end(), greater<int>());
        while (k > 0 && i < 12)
        {
            k -= v[i];
            count++;
            i++;
        }
        cout << count << endl;
    }
}