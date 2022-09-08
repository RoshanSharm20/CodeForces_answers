#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        sum = sum + x;
    }
    sum = (long double)sum / n;
    cout << sum << endl;
}