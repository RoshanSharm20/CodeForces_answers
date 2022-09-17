#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    while ((n * m) != 0)
    {
        count++;
        n -= 1;
        m -= 1;
    }
    if (count % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
}