#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v;
    for (int i = 0; i < n; ++i)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; ++i)
    {
        if (v[i] <= 2)
            cout << "NO" << endl;
        else if ((v[i] & 1) != 0)
            cout << "YES" << endl;
        else
        {
            int count = 0;
            while (v[i] != 0)
            {
                if ((v[i] & 1) != 0)
                {
                    count++;
                }
                v[i] = v[i] >> 1;
            }
            if (count == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}