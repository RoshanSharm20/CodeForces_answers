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
        int k = 2;
        while (true)
        {
            int x = pow(2, k) - 1;
            if (v[i] % x != 0)
            {
                k++;
            }
            else
            {
                cout << (v[i] / x) << endl;
                break;
            }
        }
    }
}