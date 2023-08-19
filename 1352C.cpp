#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        if (k < n)
            cout << k << endl;
        else
        {
            int x = ((k / (n - 1))) + k;
            if (x % n == 0)
                cout << x - 1 << endl;
            else
                cout << x << endl;
        }
    }
    return 0;
}