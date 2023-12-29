#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n & 1 == 1)
        cout << 0 << endl;
    else
    {
        int x = n / 2;
        if (x & 1 == 1)
        {
            cout << (x - 1) / 2 << endl;
        }
        else
        {
            cout << (x - 2) / 2 << endl;
        }
    }

    return 0;
}