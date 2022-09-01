#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int val = 0;
    while (n > 0)
    {
        if (((n % 10) == 4) || ((n % 10) == 7))
        {
            val++;
        }
        n /= 10;
    }
    if ((val == 4) || (val == 7))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}