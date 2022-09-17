#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 0)
        cout << n << endl;
    else
    {
        int x = -n;
        if ((x % 10) >= ((x / 10) % 10))
            cout << (n / 10) << endl;
        else
            cout << ((n / 10) + ((x / 10) % 10) - (x % 10)) << endl;
    }
}