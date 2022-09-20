#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, count = 0;
    cin >> n >> t;
    for (int i = 1; i <= n; ++i)
    {
        if ((i % t) == 0)
            n++;
        count++;
    }
    cout << count << endl;
}